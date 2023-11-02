#include "main.h"

/**
 * _isalpha - chaecks for alphabetic characters
 * @c: character to be checked
 * Return: 1(if c is a letter) 0(otherwise)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
