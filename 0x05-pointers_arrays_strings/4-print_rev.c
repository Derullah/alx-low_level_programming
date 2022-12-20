#include "main.h"
/**
 * print_rev - to print reverse of a string
 * @s: thi string to be printed
 *
 */
void print_rev(char *s);
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}
