#include "main.h"

/**
 * print_diagonal -draws a diagonal line on the terminal
 * @n: The number of \ to be printed
 * Return: Nothing
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			int j = 1;

			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
