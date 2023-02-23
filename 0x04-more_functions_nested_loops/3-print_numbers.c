#include "main.h"

/**
* print_numbers - a function that prints the numbers, from 0 to 9
*
* Return: 0-9 followed by newline
*/
void print_numbers(void)
{
    char numbers[] = "0123456789\n";
    int i;

    for (i = 0; i <= 10; i++)
        _putchar(numbers[i]);
}

