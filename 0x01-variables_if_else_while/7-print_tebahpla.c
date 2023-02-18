#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
		putchar(reverse);

	putchar('\n');

	return (0);
}

