#include <emscripten.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

EMSCRIPTEN_KEEPALIVE
int sumOfNInts(int n) {
    return div(mul(n, add(n, 1)), 2);
}

// to execute
// $> emcc streaming.c streaming_util.c -o streaming.js

// in streaming example in reality we don't need the JS file we call the wasm directly
// and we don't need to specify the entry parameters