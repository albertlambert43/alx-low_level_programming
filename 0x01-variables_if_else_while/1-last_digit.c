#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d but it is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d is %d and it is equal to 0\n", n, m);
	if (m < 6 && m != 0)
		printf("last digit of %d id %d so when less than 6 it is not equal to 0\n", n, m)
	return (0);
}
