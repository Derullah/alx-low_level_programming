#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 * betty style doc for function main goes there
 * writen by rogat
 * main - main
 * Return: 0
 *
 */
int main(void)

{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %d is %d", n, x);


	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (n < 6 && x  != 0)
	{
		printf("and is less than 6 and not 0");
	}
	if (n == 0)
	{
		printf("and is zero");
	}
	printf("\n");

	return (0);
}
