#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 * up to 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next = 0;
	unsigned long sum = 0;

	/* Start tracking sum with 2 since it's the first even term */
	sum = fib2;

	while (next <= 4000000)
	{
		next = fib1 + fib2;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
		{
			sum += next;
		}

		fib1 = fib2;
		fib2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}
