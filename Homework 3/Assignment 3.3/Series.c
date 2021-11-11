#include "Series.h"

int Fibonacci(int n)
{
	int previous = 1, temp = 0,sum=0;
	if (n == 1)
	{
		return 0;
	}
	for (int i = 0; i < n-1; i++)
	{
		temp = previous;
		previous = sum;
		sum += temp;
	}

	return sum;
}
