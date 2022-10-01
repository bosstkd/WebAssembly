#include <emscripten.h>
#include <stdlib.h>


int main() { return 0;}

EMSCRIPTEN_KEEPALIVE
int accumulate(int *arr, int n) {
    int sum = 0;
    while (n) {
        sum += arr[--n];
    }
    return sum;
}

// we want to return sum memory
EMSCRIPTEN_KEEPALIVE
const char *getString() {
    return "Hello, world!";
}

// malloc and free deals with the memory

EMSCRIPTEN_KEEPALIVE
void *wasmmalloc(size_t n) {
    return malloc(n);
}

EMSCRIPTEN_KEEPALIVE
void wasmfree(void *ptr) {
    free(ptr);
}