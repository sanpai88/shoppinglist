/*
  Code to create the buffer overflow in C 

*/
#include <stdio.h>

int echo()
{
    char buf[4];
    gets(buf);
    puts(buf);
    
    return 0;
}


int main()
{
   printf("Enter the string from cmd line : ");
   echo();
   return 0;
}
