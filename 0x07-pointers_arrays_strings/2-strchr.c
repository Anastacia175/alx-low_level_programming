#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: first input
 * @c: second input
 * Return: a pointer when character is found, or else retuns NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

