#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print all single digit numbers.
*
* Description: print all single digit numbers separated by * comma and space.
*
* Return: Always 0 (Success)
*/
int main(void)

{
int i
i = 48;
while (i < 58)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
i++;
}

putchar(10);

return (0);
}
