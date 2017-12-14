#pragma once

using namespace std;

extern "C" int fibonacci(int n) {
	int c;
	int next = 0;
	int first = 0;
	int second = 1;

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

extern "C" int fibonacci_recursivo(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci_recursivo(n - 2) + fibonacci_recursivo(n - 1);
}