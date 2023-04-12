#include "main.h"

/**
  *_isdigit - Check if numbers are from 0 - 9
  *
  *@x: char to be checked
  *
  *Return: 1 or 0
  */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
		return (0);
}
