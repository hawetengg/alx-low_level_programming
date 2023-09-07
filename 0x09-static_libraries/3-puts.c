#include "main.h"


/**
 * _puts - Program prints a string to stdout
 * @str: The string to be printed
 * _putchar - prints a new line
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

