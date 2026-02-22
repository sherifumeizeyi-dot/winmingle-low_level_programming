/**
 * Author: Abdulmumeen Sherifideen Umeizeyi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase then uppercase
 */
 #include <stdio.h>
 
 int main(void)
 {
     char c = 'a';
     while (c <= 'z')
     {
      if (c != 'q' && c != 'e')
       putchar(c);

      c++;
     }

    
    putchar('\n');
    return(0);
}
