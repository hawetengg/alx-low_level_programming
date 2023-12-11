#include "main.h"
#include "stdio.h"

/**
 * main - prints name of program
 * @argc: arguments
 * @argv: array of argumentss
 * Return: 0
 */

int main(int argc attribute((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
