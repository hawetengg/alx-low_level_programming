#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: An integer value
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0, flag2;
	int i, res;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
	flag = 1;
	flag2 = i;
	break;
	}
	}
	if (flag == 1)
	{
	res = s1[flag2] - s2[flag2];
	}
	else
	res = 0;
	return (res);
}
