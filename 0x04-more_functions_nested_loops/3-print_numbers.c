#include "main.h"

/**
 * print_numbers -prints the numbers from 0-9
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i >= 48 && i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
