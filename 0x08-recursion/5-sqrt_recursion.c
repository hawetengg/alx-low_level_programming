#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Input
 * Return: -1(if n does not have a natural square root)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: input number
 * @i: number to be iterated
 * Return: -1(if i*i > 0) i(if i*i = 0)
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (actual_sqrt_recursion(n, i + 1));
}
