#include <cstdio>
#include "symbol_hidden.h"

int DLL_PUBLIC symbol_hidden_func1(double) {
    printf("hello, symbol_hidden_func1\n");
    return 0;
};

int symbol_hidden_func2() {
    printf("hello, symbol_hidden_func2\n");
    return 0;
};
