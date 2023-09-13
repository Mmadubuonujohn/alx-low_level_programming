
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * This function prints the lowercase alphabet 10 times, each on a new line.
 * No parameters are needed.
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

		while (i <= 10)
		{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
			_putchar('\n');
			i++;
		}
}

