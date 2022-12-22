#include "main.h"
#include <string.h>
/**
 * _strncat - to concatenate string
 * @dest: to store string
 * @src: to keep string
 * @n: third parameter
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)

{
	strncat(dest, src, n);
	return (dest);

}
