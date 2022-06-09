#include <iostream>

#include <grpc/grpc.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include "cgen/chat.pb.h"
#include "cgen/chat.grpc.pb.h"

namespace grpc_chat 
{
	class ChatAddImpl final : public chatting::Service 
	{
  		::grpc::Status sendMessage(::grpc::ServerContext *context, const Request *req, Response *res) override 
  		{
    		std::cout << req->name() << ":" + req->message() << "," + req->posttime() << std::endl;
    		res->set_name(req->name());
    		res->set_message(req->message());
    		res->set_posttime(req->posttime());
    		return ::grpc::Status::OK;
  		}
	};
}

void RunServer()
{
	std::string server_address("localhost:50051");
	grpc_chat::ChatAddImpl service_chat;

	grpc::EnableDefaultHealthCheckService(true);
	grpc::reflection::InitProtoReflectionServerBuilderPlugin();
	grpc::ServerBuilder builder;
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	builder.RegisterService(&service_chat);

	std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
	std::cout << "Server listening on " << server_address << std::endl;
	server->Wait();
}

int main(int argc, char **argv)
{
	std::cout << "ChatServerStart!" << std::endl;
	RunServer();
	return 0;
}