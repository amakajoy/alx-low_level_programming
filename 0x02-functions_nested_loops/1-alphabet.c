#include "main.h"
/**
 * main - Print lowercase alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{


	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);

	_putchar('\n');
}
