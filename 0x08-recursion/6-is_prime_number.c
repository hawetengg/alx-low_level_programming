#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: input number
 * Return: 1(if it's a prime number) 0(otherwise)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, n - 1));
}

/**
 * is_prime - checks for prime numbers
 * through iteration
 * @n: input number
 * @i: numbers to be iterated
 * Return: 1(if prime) 0(otherwise)
 */

int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}
