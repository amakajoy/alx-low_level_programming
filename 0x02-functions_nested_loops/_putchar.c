#include "main.h"
#include <unistd.h>

/**
 * Write the character c to stdout using putchar
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
