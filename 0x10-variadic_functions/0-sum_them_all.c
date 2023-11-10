#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns sum
 * of all parameters
 * @n: numbers of parameters passed
 * @...: number of parameters to calculate the sum
 * Return: 0(if n = 0) sum of all paramateres(otherwise)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
