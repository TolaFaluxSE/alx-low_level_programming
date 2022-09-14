#include "main.h"

/**
* main - prints _putchar
*
* Description : prints _putchar
*
* Return: 0 (Success)
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
