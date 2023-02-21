#include "main.h"

/**
   *print_alphabet_x10 - This function prints the alphabet using putchar
   *
   *Return: This function returns 0 on success
   */

void print_alphabet_x10(void)
{
	int i, nl;

	i = 0;

	while (i < 10)
	{
	int j;

	j = 97;

	while (j <= 122)
	{
		_putchar(j);
		++j;

	}

	nl = 10;
	_putchar(nl);
	++i;

	}

}
