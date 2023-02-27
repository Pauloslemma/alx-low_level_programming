#include "main.h"

/**
* swap_int - write the function that swap two integer
* @a: input 1
* @b: input 2
* Return: integer
*/
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
