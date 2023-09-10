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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
