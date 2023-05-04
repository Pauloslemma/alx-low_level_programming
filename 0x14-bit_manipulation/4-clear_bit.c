#include "main.h"

/**
 * clear_bit - At a given index set the value of bit to 0.
 *
 * @n: The number
 * @index: An index
 *
 * Return: If it's work it will be 1, if an error occurred it will be -1.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = *n & ~(1 << index);
return (1);
}
