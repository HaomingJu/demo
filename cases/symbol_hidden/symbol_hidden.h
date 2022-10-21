#pragma once

#define DLL_PUBLIC      __attribute__ ((visibility ("default")))
#define DLL_LOCAL       __attribute__ ((visibility ("hidden")))

DLL_PUBLIC int symbol_hidden_func1(double);

DLL_PUBLIC int symbol_hidden_func2();
