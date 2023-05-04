#include "main.h"
/**
 * get_endianness - Check the endianness.
 * get_endianness - Return the endianness.
 *
 * Return: Big endian to 0,little endian to 1.
 */
int get_endianness(void)
{
unsigned int x;
int i = 1;

x = 1;
if (*(char *)&x == 1)
return (1);
else
return (0);
return (*((char *) &i) + '0');
}

