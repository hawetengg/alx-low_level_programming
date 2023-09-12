#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @str: A pointer that holds the adress of the string
 * Return: Capitalized string
 */
char *cap_string(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
