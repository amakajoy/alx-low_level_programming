#include "main.h"

/**
 * Print alphabet 10 times
 */
void print_alphabet_x10(void)

{
	int ten;
	char ln;

	for (ten = 0; ten <= 9; ten++)
	{
		for (ln = 'a'; ln <= 'z'; ln++)
			_putchar(ln);
		_putchar('\n');
	}
}
