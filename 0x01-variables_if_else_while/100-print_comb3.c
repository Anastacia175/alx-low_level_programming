#include <stdio.h>
/**
*main - main function
*
*Return: always 0
*/

int main(void)
{
	int i;
	int g;

	for (i = 0; i < 10; i++)
	{
		for (g = 0; g < 10; g++)
		{
			if  (i < g && i != g)
			{
				putchar(i + '0');
				putchar(g + '0');
				if (i + g  && != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
