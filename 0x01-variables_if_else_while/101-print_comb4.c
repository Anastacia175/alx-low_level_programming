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
	int j;

	for (i = 0; i < 10; i++)
	{
		for (g = 1; g < 10; g++)
		{
			for (j = 2; j < 10; j++)
			{
				if  (i < g && g < j)
				{	
					putchar(i + '0');
					putchar(g + '0');
					putchar(j + '0');
					if (i + g + j != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
