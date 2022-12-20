#include "main.h"

/**
 * _puts -> this is a function
 * @str: a param to _puts function
 *
 *
 */
void _puts(char *str);

{
	for (; *str != '\0'; str++)
	{
		_putcahr(*str);
	}

	_putchar ('\n');
}
