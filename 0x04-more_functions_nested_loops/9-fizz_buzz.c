#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the numbers from 1-100
 * followed by a new line
 * For multiples of three it prints Fizz instead of the number
 * For multiples of five it prints buzz instead of the number
 * For multiples of five and three it prints FizzBuzz
 * Return: Nothing
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d ", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}

