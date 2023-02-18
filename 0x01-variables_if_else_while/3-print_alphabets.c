#include <stdio.h>
/**
 * main - A script that prints both lowercasw ;letters and uppercase letters
 *
 * Return: 0
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	for (upper 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');
	return (0);
}
