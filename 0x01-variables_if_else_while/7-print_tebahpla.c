#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - reversed alphabets in lowercase
*
* Description: Using the putchar function to print alphabet* reverse in lowercase
* it is executed.
*
* Return: Always 0 (Success)
*/
int main(void)

{
int i = 122;
while (i > 96)
{
putchar(i);
i--;
}
putchar(10);
return (0);
}
