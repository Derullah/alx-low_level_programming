#include "main.h"
/**
 * _stlen - Count the lenth of string, "strin lenth"
 * @s: being the pointer
 * The str holding the initial string character
 * The len returning the lent of the string
 * Return: int len
 */

int _stlen(char *s)
{
	int len;

	while (*(s + len) != '\n')
			len++;
	return (len);
}
