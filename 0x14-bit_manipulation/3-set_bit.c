#include "main.h"

/**
 * set_bit - program sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which the bit is set
 * Return: 1(success) -1(error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
