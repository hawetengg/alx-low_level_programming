#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: A pointer that holds address of the destination string
 * @src: A pointer that holds address of the source string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, j = 0, i = 0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	while (src[j] != '\0')
	{
		len2++;
		j++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

