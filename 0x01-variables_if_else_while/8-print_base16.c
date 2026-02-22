/**
 * Author: Abdulmumeen Sherifideen Umeizeyi
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase then uppercase
 */
 
   #include <stdio.h>
 
 int main(void)
 {
     char c = '0';
     
     while (c   <= 'f'  )
     {
         if (c <= '9'  || c >= 'a')
     putchar(c);
     c++;
     }
     
     putchar('\n');
      
      return(0);
 }
