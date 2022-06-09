#! /bin/bash

DEST_DIR=./cgen

if [ -d $DEST_DIR ]; then
  rm -rf $DEST_DIR
  mkdir $DEST_DIR
else
  mkdir $DEST_DIR
fi

protoc \
 --proto_path=./protos \
 --grpc_out=${DEST_DIR} --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./protos/*.proto

protoc \
 --proto_path=./protos \
 --cpp_out=${DEST_DIR} ./protos/*.proto