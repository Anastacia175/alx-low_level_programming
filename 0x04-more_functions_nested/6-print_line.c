#include "main.h"
/**
  * print_line - Draws a straight line
  *
  *@n: The number to  of the lines to draw
  *Return: Always 0
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
