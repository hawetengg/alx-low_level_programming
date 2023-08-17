#include "main.h"

/**
 * _isupper -checks for uppecase character
 * @c: The letter to be checked
 * Return: 1(success) 0(otherwise)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}

