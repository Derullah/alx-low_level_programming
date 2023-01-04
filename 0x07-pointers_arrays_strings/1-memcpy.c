#include "main.h"
#include <stdio.h>

 /**
  * _memcpy - copies memory area
  * @dest: is destination memory
  * @src: source memory
  * @n number of byte(s)
  * Return: string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	
	}
	return (dest);
}
