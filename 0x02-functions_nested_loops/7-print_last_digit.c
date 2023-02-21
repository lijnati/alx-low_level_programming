#include "main.h"

/**
   *print_last_digit - returns the last digit of a number
   *@n: integer input
   *
   *Return: This function returns a postive int number
   */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
	n = n * -1;
	}

	_putchar(n + '0');

	return (n);
}
