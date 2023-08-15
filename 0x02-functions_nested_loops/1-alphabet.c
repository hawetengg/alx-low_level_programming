#include "main.h"

/**
 * print_alphabet - Prints the Alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c >= 'a')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
