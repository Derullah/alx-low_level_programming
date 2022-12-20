#include "main.h"
/**
 * _strlen - Count the lenth of string, "strin lenth"
 * @s: being the pointer
 * The str holding the initial string character
 * The len returning the lent of the string
 * Return: int len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return ((int) len);
}
