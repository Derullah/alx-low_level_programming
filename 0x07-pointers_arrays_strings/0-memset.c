#include "main.h"
 /**
  * _memset - function to print memory size
  * @s: character 1
  * @b: character 2
  * @n: integer
  * Return: a pointer to the memory s
  */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;

	}

	return (s);
}
