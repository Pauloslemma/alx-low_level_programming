#include "main.h"
/**
* sqrt_check - checks for the square root of c
* @g:guess at sqrt
* @c: number to find sqrt of
*
* Return: -1 or sqrt of c
*/
int sqrt_check(int g, int c)
{
if (g * g == c)
return (g);
if (g * g > c)
return (-1);
return (sqrt_check(g + 1, c));
}
