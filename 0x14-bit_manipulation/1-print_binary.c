#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
* print_binary - Binary representation of a number to be print.
* @n: Print the number.
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int printbit = 1ul << 63;
char j = '0';

while (!(printbit & n) && printbit != 0)
printbit = printbit >> 1;

if (printbit == 0)
write(1, &j, 1);

while (printbit)
{
if (printbit & n)
j = '1';
else
j = '0';
write(1, &j, 1);
printbit = printbit >> 1;
}
}


