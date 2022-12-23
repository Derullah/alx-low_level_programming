#include "main.h"
#include <string.h>
/**
 * reverse_array - this will reverse array
 * @a: parametr one
 * @n: parameter two
 * Return: nothing
 */

void reverse_array(int *a, int n)
{

	void swap(char str[], int, int);

	int lo, hi;
	char str[] = "hello";
	for (lo = 0, hi = strlen(str) -1; lo < hi; lo++, hi--)
		swap(str, lo, hi);
}
