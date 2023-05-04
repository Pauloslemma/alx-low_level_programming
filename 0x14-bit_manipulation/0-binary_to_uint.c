#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string that contains a binary number.
 *
 * Return: The converted unsigned int number or 0 if b is NULL or contains
 *         characters that are not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b == '0' || *b == '1')
{
res <<= 1;
res += (*b - '0');
b++;
}
else
{
return (0);
}
}

return (res);
}

