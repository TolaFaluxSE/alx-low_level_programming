#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print all single digit numbers of base 10 starting* from 0.
*
* Description: print all single digit numbers of base 10 fr* om base 0.
*
* Return: Always 0 (Success)
*/
int main(void)

{
int i, j;
i = 48;
j = 97;

while (i < 58)
{
putchar(i);
i++;
}

while (j < 103)
{
putchar(j);
j++;
}

putchar(10);

return (0);
}
