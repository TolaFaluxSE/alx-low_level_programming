#include "main.h"

/**
* main : prints _putchar to stdout
*
* Description: prints _putchar without printf etc
*
* Return: 0
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)

{
char text[10] = "_putchar\n";
int i = 0;
for (i = 0; i < 9; i++)

{_putchar(text[i]);
}
return (0);
}
