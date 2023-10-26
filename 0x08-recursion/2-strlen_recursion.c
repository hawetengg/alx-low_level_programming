#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s : input
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
