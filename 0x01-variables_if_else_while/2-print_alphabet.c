#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - send alphabets to be in lowercase
*
* Description: Using the putchar function to print alphabet* in lowercase
* it is executed.
*
* Return: Always 0 (Success)
*/
int main()

{
char ch = 'a';
putchar("Lowercase English Alphabets:\n"); 

while(ch <= 'z')    
{
putchar("%s\n", ch);
ch++;
}
return 0;  
}
