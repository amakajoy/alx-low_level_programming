#include <stdio.h>
/**
 * main - Print digit numbers of base 10 starting from0 using putchar
 *
 * Return: 0
 */

int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
		putchar((base % 10) + '0');

	putchar('\n');

	return (0);
}
