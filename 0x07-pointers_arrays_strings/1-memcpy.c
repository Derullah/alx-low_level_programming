#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * area src to memomry area dest
 * @dest: destinatrion
 * @src: sorce
 * @n: lenth of buffer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(dest + i);
		i++;

	}

	return (dest);
}
