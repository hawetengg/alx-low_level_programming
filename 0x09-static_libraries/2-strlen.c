#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: input string
 * Return: length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
