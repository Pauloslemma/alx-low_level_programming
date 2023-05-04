#include "main.h"
/**
* get_bit - Return value of a bit at a the given index.
* @n: Number to get from
* @index: Index
*
* Return: 0
*/

int get_bit(unsigned long int n, unsigned int index)
{

unsigned long int d;

if (index > 63)
return (-1);

d = 1 << index;
return ((n & d) > 0);
}

