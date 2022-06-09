// package: grpc_chat
// file: chat.proto

/* tslint:disable */
/* eslint-disable */

import * as grpc from "@grpc/grpc-js";
import * as chat_pb from "./chat_pb";
import * as google_protobuf_timestamp_pb from "google-protobuf/google/protobuf/timestamp_pb";

interface IchattingService extends grpc.ServiceDefinition<grpc.UntypedServiceImplementation> {
    sendMessage: IchattingService_IsendMessage;
}

interface IchattingService_IsendMessage extends grpc.MethodDefinition<chat_pb.Request, chat_pb.Response> {
    path: "/grpc_chat.chatting/sendMessage";
    requestStream: false;
    responseStream: false;
    requestSerialize: grpc.serialize<chat_pb.Request>;
    requestDeserialize: grpc.deserialize<chat_pb.Request>;
    responseSerialize: grpc.serialize<chat_pb.Response>;
    responseDeserialize: grpc.deserialize<chat_pb.Response>;
}

export const chattingService: IchattingService;

export interface IchattingServer extends grpc.UntypedServiceImplementation {
    sendMessage: grpc.handleUnaryCall<chat_pb.Request, chat_pb.Response>;
}

export interface IchattingClient {
    sendMessage(request: chat_pb.Request, callback: (error: grpc.ServiceError | null, response: chat_pb.Response) => void): grpc.ClientUnaryCall;
    sendMessage(request: chat_pb.Request, metadata: grpc.Metadata, callback: (error: grpc.ServiceError | null, response: chat_pb.Response) => void): grpc.ClientUnaryCall;
    sendMessage(request: chat_pb.Request, metadata: grpc.Metadata, options: Partial<grpc.CallOptions>, callback: (error: grpc.ServiceError | null, response: chat_pb.Response) => void): grpc.ClientUnaryCall;
}

export class chattingClient extends grpc.Client implements IchattingClient {
    constructor(address: string, credentials: grpc.ChannelCredentials, options?: Partial<grpc.ClientOptions>);
    public sendMessage(request: chat_pb.Request, callback: (error: grpc.ServiceError | null, response: chat_pb.Response) => void): grpc.ClientUnaryCall;
    public sendMessage(request: chat_pb.Request, metadata: grpc.Metadata, callback: (error: grpc.ServiceError | null, response: chat_pb.Response) => void): grpc.ClientUnaryCall;
    public sendMessage(request: chat_pb.Request, metadata: grpc.Metadata, options: Partial<grpc.CallOptions>, callback: (error: grpc.ServiceError | null, response: chat_pb.Response) => void): grpc.ClientUnaryCall;
}
