#include "main.h"
/**
  *print_sign - returns 1 and print + sign if the input is
  *greater than 1
  *another case shows 0 and print zero
  *The last case show negative if the number is less than 0
  *
  *@n: The input number of integer
  *
  *Return: 1 for letter. 0 for the rest
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(43);
		return (0);
	}
	_putchar('\n');
}
