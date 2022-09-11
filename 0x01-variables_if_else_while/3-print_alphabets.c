#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main : alphabets to be in uppercase & lowercase      
*
* Description: Using the putchar function to print alphabet
* in lowercase & uppercase                                  
* it is executed.
*
* Return: Always 0 (Success)
*/
int main(void)  
{
char chr ='a';
for (chr = 'a'; chr <= 'z'; chr++)
putchar(chr);
char ch ='A';
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
return (0);  
}
