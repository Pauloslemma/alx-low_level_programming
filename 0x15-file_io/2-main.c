#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check the code
* @ac: The number of command-line arguments passed to the program
* @av: An array of strings containing the command-line arguments
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
int result;

if (ac != 3)
{
dprintf(2, "Usage: %s filename text\n", av[0]);
exit(1);
}
result = append_text_to_file(av[1], av[2]);
printf("-> %i)\n", result);
return (0);
}
