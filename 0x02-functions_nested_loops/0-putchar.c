#include "main.h"

/**
* _putchar - prints _putchar to stdout
*
* Description: prints _putchar without printf etc
*
* Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)

{
char text[9] = "_putchar";
int i = 0;
for (i = 0; i <= 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
