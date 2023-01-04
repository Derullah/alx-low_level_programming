#include "main.h"

/**
 * _memset - to read the memory of n in bytes
 * @s: string
 * @b: the constant byte of a file
 * @n: the lenth of the buffer
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)

	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
