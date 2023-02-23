#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* print_square - a function that prints a square, followed by a new line
* @size: size of both width and length
* Return: a square made of '#'
*/
void print_square(int size)
{
int co, ro;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= size; co++)
{
_putchar('#');
for (ro = 2; ro <= size; ro++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

