#include "main.h"

/**
   *_islower - checks if character is lowercase
   *@c: character to be checked
   *
   *Return: This function returns 0 on success
   */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	return (0);
}
