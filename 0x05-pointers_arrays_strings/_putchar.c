#include <unistd.h>

/**
 * _putchar - writes the character c to std out
 * @c: The character to be printed
 * Return: 1(Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
