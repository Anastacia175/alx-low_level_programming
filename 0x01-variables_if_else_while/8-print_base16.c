#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char k;

for (i = 0; i < 10; i++)
	putchar(i + '0');
for (k = 'a'; k <= 'f'; k++)
	putchar(k);
putchar('\n');
return (0);
}
