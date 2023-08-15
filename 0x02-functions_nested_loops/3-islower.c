#include "main.h"

/**
 * _islower - checks for lowercase characte
 * @c: alphabet to be checked
 * Return: 0(Lowercase) 1(Otherwise)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
	return (1);
	}
	else
	return (0);
}
