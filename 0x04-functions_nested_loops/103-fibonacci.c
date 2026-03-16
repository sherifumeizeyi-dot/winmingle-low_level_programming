#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers <= 4000000
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, next, sum = 2;

	while (1)
	{
		next = a + b;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		a = b;
		b = next;
	}

	printf("%lu\n", sum);

	return (0);
}
