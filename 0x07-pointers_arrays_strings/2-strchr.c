#include "main.h"

/**
 * _strchr - locates char in string
 * @s: string
 * @c: character to find
 * Return: pointer to char c
 */

char *_strchr(char *s, char c)
{


	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);


}
