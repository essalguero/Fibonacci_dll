#pragma once

using namespace std;

#ifdef FIBONACCI_EXPORTS
#define FIBONACCI_API __declspec(dllexport)
#else
#define FIBONACCI_API __declspec(dllimport)
#endif

extern "C" FIBONACCI_API double fibonacci(int);
extern "C" FIBONACCI_API double fibonacci_recursivo(int);
extern "C" FIBONACCI_API double fibonacci_DivideAndConquer(int);
extern "C" FIBONACCI_API double fibonacci_Uno();