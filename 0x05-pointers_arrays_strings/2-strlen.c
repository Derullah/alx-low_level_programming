#include "main.h"

/**
 * _strlen:  function that retuns the lenth of a sting
 * @s: string pointer
 *
 * Return: return lenth of the sting
 *
 */

int _stlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
