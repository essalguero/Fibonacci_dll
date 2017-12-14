// Fibonacci_dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>

#include "Fibonacci_dll.h"

double fibonacci(int n) {
	int c;
	double next = 0;
	double first = 0;
	double second = 1;

	for (c = 0; c <= n; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		//cout << next << endl;
	}

	return next;
}

double fibonacci_recursivo(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci_recursivo(n - 2) + fibonacci_recursivo(n - 1);
}

double fibonacci_DivideAndConquer(int n) {
	if (n <= 0)
		return 1;

	int i = n - 1;
	double auxOne = 0;
	double auxTwo = 1;

	double a = auxTwo;
	double b = auxOne;

	double c = auxOne;
	double d = auxTwo;

	while (i > 0) {
		if (i % 2 != 0) {
			auxOne = ((d * b) + (c * a));
			auxTwo = ((d * (b + a)) + (c * b));

			a = auxOne;
			b = auxTwo;
		}

		auxOne = (c * c) + (d * d);
		auxTwo = (d * ((2 * c) + d));
		c = auxOne;
		d = auxTwo;

		i = i / 2;
	}

	return a + b;
}

double fibonacci_Uno() {
	return 1;
}