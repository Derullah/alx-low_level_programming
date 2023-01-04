#include "main.h"

/**
 * _memset - starting address of memory to be filled
 * @s: character 1
 * @b: character 2
 * @n: integer
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <  n)
	{
		*(s + 1) = b;
		i++;
	}
	return (s);
}
