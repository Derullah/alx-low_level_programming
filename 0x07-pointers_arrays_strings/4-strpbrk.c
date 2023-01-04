#include "main.h"

/**
 * _strpbrk - locates the first occurng sting
 * @s: string to be located
 * @accept: search string
 * Return: new string
 */

char *_strpbrk(char *s, char *accept)
{


	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);


}
