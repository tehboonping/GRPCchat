const socket = io();

const urlRoomId = sessionStorage.getItem('roomId');
const urlName = sessionStorage.getItem('name');

socket.on("connect", () => {
  var room_name = document.getElementById("room_name");
  if(urlRoomId == null)
  {
    document.write("ルームIDが存在しません。");
  }
  room_name.innerHTML = urlRoomId + "のチャットルーム";

  socket.emit("join",  { roomId: urlRoomId, name: urlName });
});

document.getElementById("frm-post").addEventListener("submit", function(e) {
  e.preventDefault();

  const msg = document.getElementById("msg");
  if (msg.value != "" || msg.value != "\n")  {
    
    socket.emit("post", urlName, msg.value);
    msg.value = "";
  }
});

socket.on("showmessages", function(rows) {
  const list = document.getElementById("msglist");

  for(var i = 0; i < rows.length; i++)
  {
    var li = document.createElement("li");

    var time = rows[i].posttime;
    var posttime = time.replace('T', ' ').substr(0, 19);

    li.innerHTML = rows[i].name + "\n" + rows[i].message + "\n" + posttime;
    li.classList.add('child');
    list.appendChild(li, list.firstChild);
  }

  list.scrollTo(0, list.scrollHeight);
});

socket.on("showchat", function(name, message, posttime)
{
  const list = document.getElementById("msglist");
  var li = document.createElement("li");
  li.innerHTML = name + "\n" + message + "\n" + posttime;
  li.classList.add('child');
  list.appendChild(li, list.firstChild);
  list.scrollTo(0, list.scrollHeight);
});