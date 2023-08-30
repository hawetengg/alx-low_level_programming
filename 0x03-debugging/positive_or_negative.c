#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - A function that checks
 * if a number is postive or negative
 * @i: The number to be checked
 * Return: Nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is postive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
