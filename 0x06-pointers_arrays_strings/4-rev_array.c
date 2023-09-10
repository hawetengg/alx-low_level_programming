#include "main.h"

/**
 * reverse_array - A function that reverses the content
 * of an array of integers
 * @a: A pointer value that contains
 * the address of the array passed
 * @n: The number of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}

