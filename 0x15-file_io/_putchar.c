#include <unistd.h>

/**
 * _putchar - Writes the char c to stdout
 * @c: char to print
 *
 * Return: To be success 1.
 * On error return to be -1, and errno is set to be appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
