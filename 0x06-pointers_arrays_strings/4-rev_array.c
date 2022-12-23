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
	void swap(int *x, int *y)
	{
		int temp = *x;
		*x = *y;
	*y = temp;
	}

	int lo, hi;
	for (lo = 0, hi = n - 1; lo < hi; lo++, hi--)

	swap(&a[lo], &a[hi]);
}
