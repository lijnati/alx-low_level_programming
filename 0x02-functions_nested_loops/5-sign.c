#include "main.h"

/**
   *print_sign - prints the sign of a number
   *@n: character to be checked
   *
   *Return: This function returns -1, 1 or 0 depending on input
   */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);

	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
