#include "main.h"
#include <unistd.h>

/**
* main - print _putchar followed by a new line
*
* Description - print _putchar in file 0-putchar.c
*
*/

int _putchar(char c)
{
  return (write(1, &c, 1));

}
