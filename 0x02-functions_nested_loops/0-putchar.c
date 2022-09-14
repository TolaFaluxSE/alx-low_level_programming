#include "main.h"

/**
* Description: main header is a prototype in main.h file
*
* main : prints _putchar to stdout
*
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
