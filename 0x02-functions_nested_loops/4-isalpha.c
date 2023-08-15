#include "main.h"

/**
 *  _isalpha - checks for alphabetic character
 *  @c: The alphabet to be checked
 *  Return: 1(Alphabet) 0(Otherwise)
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
