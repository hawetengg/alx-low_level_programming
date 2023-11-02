#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c: input character
 * Return: 1(uppercase) 0(Otherwise)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
