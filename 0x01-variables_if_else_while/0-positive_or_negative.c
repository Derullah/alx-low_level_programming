#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/* more headers goes there */

/**
 * * main -print a random num
 * *
 *   *Return: 0
 *
 *    *
 *
 *     * betty wrigting style
 *
 *      **/

int main(void)
{
		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* your code goes there */

		if (n > 0)
			printf("%d is positive\n", n);
		else if (n < 0)
			printf("%dnis zero\n", n);
		else
			("%d is negative\n", n);
		return (0);

}
