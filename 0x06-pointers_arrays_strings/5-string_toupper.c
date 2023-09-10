#include "main.h"
/**
 * string_toupper - A function that changes
 * all lowercase letters of a string to uppercase
 * @n: A pointer that holds the address
 * of the character array
 * Return: Letters of string in upper case
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
		i++;
	}
	return (n);
}
