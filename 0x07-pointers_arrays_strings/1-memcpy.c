#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * area src to memomry area dest
 * @dest: destinatrion
 * @src: sorce
 * @n: byte file
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n, i++)
		*(dest + i) = *(src + i);
	return (dest);
}
