#include "main.h"
/**
  *_memcpy - copies memory area.
  *
  *@dest: memory where is stored
  *@src: memory where is copied
  *@n: number of bytes
  *Return:a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
