#Makefile
OUTPUT=jgen
NPM_BIN=$(shell npm bin)

GRPC_TOOL=$(NPM_BIN)/grpc_tools_node_protoc
TYPESCRIPT_PLUGIN=protoc-gen-ts=$(NPM_BIN)/protoc-gen-ts.cmd

COMMAND=$(GRPC_TOOL) --plugin=${TYPESCRIPT_PLUGIN} --js_out=import_style=commonjs,binary:$(OUTPUT) --grpc_out=grpc_js:$(OUTPUT) --ts_out=grpc_js:$(OUTPUT) -I ./protos ./protos/chat.proto

.PHONY: protogen
protogen:
	rmdir $(OUTPUT) && mkdir $(OUTPUT)
	$(COMMAND)