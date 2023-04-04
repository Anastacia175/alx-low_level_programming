#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: First input  character
 * @accept: secont input character
 * Return: A pointer to bytes in s that matches accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

