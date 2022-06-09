const grpc = require('@grpc/grpc-js');
const messages = require('./jgen/chat_pb');
const services = require('./jgen/chat_grpc_pb');

const PORT = 80;

const express = require("express");
const app = express();
const http = require("http").createServer(app).listen(PORT, function() {
  console.log("App listening on PORT:" + PORT);
});
const io = require("socket.io")(http);

var mysql2 = require("mysql2");
var mysql = mysql2.createConnection({
    host: 'mysql',
    user: 'root',
    password: 'pass',
    database: 'grpcdata'
});

mysql.connect(function(err) {
    if(err) {
      console.error("ConnectError", err);
    }
});

let store = {};

app.use(express.static('src'));

app.get("/", function(req, res) {
  res.sendFile(__dirname + "/index.html");
});

app.get("/chat", function(req, res) {
  res.sendFile(__dirname + "/src/chat.html");
});

io.on("connection", function(socket) {

  socket.on("join", function(msg)　{
    mysql.query('SELECT * FROM chatdata WHERE room_id =?',[msg.roomId], function(err, rows) {
      if(err) {
        console.error(err);
      }
      socket.emit("showmessages", rows);

      usrobj = {
        'room': msg.roomId,
        'name': msg.name
      }
      store = usrobj;
      socket.join(msg.roomId);
    });
  });

  socket.on("post", function(name, message) {
    const request = new messages.Request();
    request.setName(name);
    request.setMessage(message);

    var now = new Date();
    now.setTime(now.getTime() + (9*60*60*1000));
    var posttime = now.toISOString().replace('T', ' ').substr(0, 19);

    request.setPosttime(posttime);

    var client = new services.chattingClient('localhost:50051', grpc.credentials.createInsecure());

    client.sendMessage(request, function (err, res) {
      if(err) {
        console.error("ReceiveError", err);
      }

      var savename = res.getName();
      var savemessage = res.getMessage();
      var savetime = res.getPosttime();

      io.to(store.room).emit("showchat", savename, savemessage, savetime);

      mysql.query('INSERT INTO chatdata SET room_id=?, name=?, message=?, posttime=?',[store.room,savename,savemessage,savetime], function(err) {
        if(err) {
          console.error("MysqlSaveError", err);
        }
      });
    });
  });
});