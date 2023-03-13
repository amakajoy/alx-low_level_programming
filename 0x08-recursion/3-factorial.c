#include "main.h"




int factorial(int n)
{
	int y;

	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		x = n * factorial(n - 1);
	}

	return (x);
}
