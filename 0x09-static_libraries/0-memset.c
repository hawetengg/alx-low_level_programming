#include "main.h"

/**
 * _memset - blocks of memory with value
 * @s: starting address of memory
 * @b: value to be changed
 * @n: number of bytes to change
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
	}
	return (s);
}
