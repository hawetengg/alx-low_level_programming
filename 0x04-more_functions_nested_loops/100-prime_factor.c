#include <stdio.h>

/**
 * main - function that finds and prints the largest prime
 * factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	int i = 2;
	long max = 0;

	while (i < num / 2)
	{
		if (num % i == 0)
		{
			num = num / i;
			if (i > max)
			{
				max = i;
			}
			i = 2;
		}
		else
			i++;
	}
	printf("%ld\n", max);
	return (0);
}
