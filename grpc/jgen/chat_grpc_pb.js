// GENERATED CODE -- DO NOT EDIT!

'use strict';
var grpc = require('@grpc/grpc-js');
var chat_pb = require('./chat_pb.js');
var google_protobuf_timestamp_pb = require('google-protobuf/google/protobuf/timestamp_pb.js');

function serialize_grpc_chat_Request(arg) {
  if (!(arg instanceof chat_pb.Request)) {
    throw new Error('Expected argument of type grpc_chat.Request');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_grpc_chat_Request(buffer_arg) {
  return chat_pb.Request.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_grpc_chat_Response(arg) {
  if (!(arg instanceof chat_pb.Response)) {
    throw new Error('Expected argument of type grpc_chat.Response');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_grpc_chat_Response(buffer_arg) {
  return chat_pb.Response.deserializeBinary(new Uint8Array(buffer_arg));
}


var chattingService = exports.chattingService = {
  sendMessage: {
    path: '/grpc_chat.chatting/sendMessage',
    requestStream: false,
    responseStream: false,
    requestType: chat_pb.Request,
    responseType: chat_pb.Response,
    requestSerialize: serialize_grpc_chat_Request,
    requestDeserialize: deserialize_grpc_chat_Request,
    responseSerialize: serialize_grpc_chat_Response,
    responseDeserialize: deserialize_grpc_chat_Response,
  },
};

exports.chattingClient = grpc.makeGenericClientConstructor(chattingService);
