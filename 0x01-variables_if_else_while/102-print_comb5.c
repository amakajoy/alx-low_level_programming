#include <stdio.h>
/**
 * main -Print all posible combinations of two two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 8)
				break;
			putchar(',');

			putchar(' ');
		}
	}

	for (num3 = 0; num3 < 10; num3++)
	{
		for (num4 = num3 + 1; num4 < 10; num4++)
		{
			putchar((num3 % 10) + '0');

			putchar((num4 % 10) + '0');

			if (num3 == 9 && num4 == 9)
				break;

			putchar(',');

			putchar(' ');
		}
	}

	return (0);



}
