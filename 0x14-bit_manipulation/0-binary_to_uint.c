#include "main.h"
/**
 * binary_to_uint - Binary number to an unsigned int.
 *
 * @b: Binary number that is contained by string pointer.
 *
 * Return: Converted unsigned int number or if b is NULL it will be 0 or
 *         char that are not '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b == '0' || *b == '1')
{
result <<= 1;
result += (*b - '0');
b++;
}
else
{
return (0);
}
}

return (result);
}

