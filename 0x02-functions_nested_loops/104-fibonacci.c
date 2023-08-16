#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with
 * 1 and 2 , separated by a coma followed by a space
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long fh1, fh2, fh21, fh22;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	fh1 = f1 / 10000000000;
	f21 = f2 / 10000000000;
	fh1 = f1 % 10000000000;
	fh22 = f2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h1 = fh1 + fh21;
		h2 = fh2 + fh22;
		if (fh2 + fh22 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		fh1 = fh21;
		fh12 = fh22;
		fh21 = h1;
		fh22 = h2;
	}
}

