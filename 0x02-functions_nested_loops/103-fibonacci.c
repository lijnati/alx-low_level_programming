#include "stdio.h"

/**
 * main - prints the sum of all even fibonacci numbers to 4000000.
 *
 * Return: Zero on succesful exit.
 */

int main(void)
{
	long i = 0;
	long j = 1;
	long n = 2;
	int sum = n;

	while (n + j < 4000000)
	{
		n += j;

		if (n % 2 == 0)
			sum += n;

		j = n - j;

		++i;
	}

	printf("%1d\n", sum);
	return (0);
}
