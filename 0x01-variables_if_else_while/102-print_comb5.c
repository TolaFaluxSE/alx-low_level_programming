#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print two two-digit number.
*
* Description: print two two-digit number separated by
* comma and space.
*
* Return: Always 0 (Success)
*/
int main(void)

{
int i, j, k, m;
i = 48;
 j = 48;
 k = 48;
 m = 48;
while (i < 58)
{
  j = i + 1;
while (j < 58)
{
k = j + 1;

while (k < 58)
{
  m = k + 1;
while (m < 58)
{
putchar(i);
putchar(j);
putchar(32);
putchar(k);
putchar(m);

if (i < 56 || j < 57 || k < 56 || m < 57)
{
putchar(44);
putchar(32);
}
m++;

}

k++;
}
j++;
}
i++;

}
putchar(10);

return (0);
}
