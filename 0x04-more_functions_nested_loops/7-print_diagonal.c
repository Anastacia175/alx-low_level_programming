#include "main.h"
/**
  *print_diagonal - draws a diagonal line on the terminal
  *
  *Description: If n is 0 or less, the function should only print a \n
  *@n: The number of times to print diagonal lines
  *Return: empty
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x > n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(32);
			_putchar('\n');
		}
	}
}
}
