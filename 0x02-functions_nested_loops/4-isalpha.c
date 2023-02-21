#include "main.h"

/**
   *_isalpha - checks if character is alphanumeric
   *@c: character to be checked
   *
   *Return: This function returns 1 or 0 depending on input
   */

int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
