#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	switch (last_digit)
	{
	case 0:
		printf("and is 0\n");
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		printf("and is greater than 5\n");
		break;
	default:
		printf("and is less than 6 and not 0\n");
		break;
	}

	return (0);
}
