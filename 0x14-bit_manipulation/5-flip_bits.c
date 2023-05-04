#include "main.h"
/**
 * flip_bits - Flip one number to another to get return numbers of bits.
 * @n: The first number
 * @m: The second number
 *
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int y = n ^ m;
unsigned int bit_count = 0;

while (y != 0)
{
bit_count += y & 1;
y >>= 1;
}

return (bit_count);
}

