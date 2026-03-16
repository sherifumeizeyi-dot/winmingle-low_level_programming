#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long prev1 = 1, prev2 = 2, next;
    int count;

    /* print first two numbers */
    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');

    /* print the remaining 96 numbers */
    for (count = 3; count <= 98; count++)
    {
        next = prev1 + prev2;

        _putchar(',');
        _putchar(' ');

        /* print number digit by digit */
        if (next < 10)
            _putchar(next + '0');
        else
        {
            unsigned long div = 1, temp = next;

            while (temp / div >= 10)
                div *= 10;

            while (div > 0)
            {
                _putchar((next / div) % 10 + '0');
                div /= 10;
            }
        }

        prev1 = prev2;
        prev2 = next;
    }

    _putchar('\n');
    return (0);
}
