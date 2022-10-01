# First step to use web Assembly

## Installation
- git clone https://github.com/emscripten-core/emsdk.git
- cd emsdk
- emsdk install latest

### After choosing the operating folder: 
> emsdk activate latest 

### Execute the helper sript or add it to your shell profile:
> source ./emsdk_env.sh

## How to use emscripten ? from the command line:
 - emcc   --> means we want to use a .c program file
 - em++ 	 --> means that we want to use .c++ program file

### To run a simple hello world program:
 - $> emcc hello_world.c

### To run a program as wrapping :
 - $> emcc wrapping.c -o wrapping.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall,cwrap

 ### To run a program as streaming, memory or malloc :
 - $> emcc streaming.c streaming_util.c -o streaming.js
 - on streaming we can specify all .c files that we needs to run the principal stream program for example streaming_util.c.
 - on streaming we don't need .js file because we call directly the .wasm file.
