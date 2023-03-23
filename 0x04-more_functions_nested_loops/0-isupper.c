#include "main.h"
/**
  *_isupper - shows if the input is uppercase
  *character and returns 1 else returns 0
  *
  *@c: The character in ASCII code
  *
  *Return: 1 for lowercase character and 0 for the rest
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
