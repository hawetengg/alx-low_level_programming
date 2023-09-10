#include "main.h"

/**
 * _strncat - concatenates two strings and
 * it will use at most n bytes from src
 * @dest: A pointer that contains the address of
 * the destination string
 * @src: A pointer that contains the address of
 * the source string
 * @n: number of characters to be concatenated
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
		dest[len1 + j] = src[j];
		}
	}
	return (dest);
}
