#include <stdio.h>
/**
 * main -Print all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');

		putchar (',');

		putchar (' ');
	}

	putchar ('\n');

	return (0);
}
