#include "main.h"

/**
* _puts_recursion - Entery point
*@s: input 
* return: always 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
