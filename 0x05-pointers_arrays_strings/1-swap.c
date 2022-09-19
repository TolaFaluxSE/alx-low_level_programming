#include "main.h"


/**
* 1-swap_int - swaps the values of two integers
* @a: pointer 1
* @b: pointer 2
* return: void
*/

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
