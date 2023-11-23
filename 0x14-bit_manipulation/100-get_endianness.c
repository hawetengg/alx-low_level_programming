#include "main.h"

/**
 * get_endianness - program that checks endianness
 * Return: 0 if big endian, 1 if ittle endian
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
