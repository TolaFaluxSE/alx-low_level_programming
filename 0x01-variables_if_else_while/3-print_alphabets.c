#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main : alphabets to be in uppercase & lowercase      
*
* Description: Using the putchar function to print alphabet
* in lowercase & uppercase
* ASCII value, uppercase alphabets - 65 to 90
* ASCII value, lowercase - 97 to 122
* it is executed.
*
* Return: Always 0 (Success)
*/
int main(void)  
{
int a, A;
a = 97;
A = 65;

while (a < 123)
{
putchar(a);
a++;
}

while (A < 91)
{
putchar(A);
A++;
}

putchar(10);

return (0);
}
