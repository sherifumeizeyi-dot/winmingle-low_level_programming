/**
 * Author: Abdulmumeen Sherifideen Umeizeyi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase then uppercase
 */
 
   #include <stdio.h>
 
 int main(void)
 {
     int c = 0;
     
     while (c  <= 9 )
     {
     putchar(c + '0');
     c++;
     }
     
     putchar('\n');
      
      return(0);
 }
