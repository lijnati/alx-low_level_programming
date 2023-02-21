#include "main.h"

/**
   *print_alphabet - This function prints the alphabet using putchar
   *
   *Return: This function returns 0 on success
   */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		++i;
	}
	i = 10;
	_putchar(i);
}
