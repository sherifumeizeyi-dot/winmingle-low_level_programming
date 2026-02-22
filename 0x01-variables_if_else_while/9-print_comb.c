/**
 * Author: Abdulmumeen Sherifideen Umeizeyi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase then uppercase
 */
 
 
 #include <stdio.h>

int main(void)
{
    char c = '0';

    while (c <= '9')
    {
        putchar(c);

        if (c != '9')   /* avoid comma after last number */
        {
            putchar(',');
            putchar(' ');
        }

        c++;
    }

    putchar('\n');

    return (0);
}
