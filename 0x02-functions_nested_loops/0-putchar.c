#include <stdio.h>

/**
   *main - This function prints _putchar using putchar
   *
   *Return: This function returns 0 on success
   */
int main(void)
{
	int i = 0;
	char print[9];

	print [0] = 95;
	print [1] = 112;
	print [2] = 117;
	print [3] = 116;
	print [4] = 99;
	print [5] = 104;
	print [6] = 97;
	print [7] = 114;
	print [8] = 10;

	while (i <= 8)
	{
		putchar(print[i]);
		++i;
	}

	return (0);
}
