#include "main.h"

/**
* _isupper - function to check for uppercase
* @c: character for input
* Return: returns 1 if uppercase, 0 otherwise
*/

int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
