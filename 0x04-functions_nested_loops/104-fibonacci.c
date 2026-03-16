#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a1, a2, sum;
	unsigned long int a1h1, a1h2, a2h1, a2h2;
	unsigned long int h1, h2;
	int count;

	a1 = 1;
	a2 = 2;

	printf("%lu, %lu", a1, a2);

	for (count = 2; count < 92; count++)
	{
		sum = a1 + a2;
		printf(", %lu", sum);
		a1 = a2;
		a2 = sum;
	}

	a1h1 = a1 / 10000000000;
	a1h2 = a1 % 10000000000;
	a2h1 = a2 / 10000000000;
	a2h2 = a2 % 10000000000;

	for (count = 92; count < 98; count++)
	{
		h1 = a1h1 + a2h1;
		h2 = a1h2 + a2h2;

		if (h2 >= 10000000000)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf(", %lu%010lu", h1, h2);

		a1h1 = a2h1;
		a1h2 = a2h2;
		a2h1 = h1;
		a2h2 = h2;
	}

	printf("\n");

	return (0);
}
