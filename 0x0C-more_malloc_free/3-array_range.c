#include "main.h"
#include <stdlib.h>

/**
 * array_range - creating an array of integers
 * @min: value which is minimum
 * @max: value
 * Return: integer pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < 1; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
