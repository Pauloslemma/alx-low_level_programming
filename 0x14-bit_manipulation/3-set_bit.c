#include "main.h"
/**
 * set_bit - At the given index of 1 set the value of a bit.
 * @n: Modify the pointer to the number.
 * @index: index of the bit to modify (starting from 0)
 *
 * Return: If it's worked it will be 1, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

*n |= (1 << index);
return (1);
}
