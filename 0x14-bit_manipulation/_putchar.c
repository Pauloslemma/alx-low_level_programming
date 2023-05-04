#include <unistd.h>

/**
 * _putchar - Writes the char j to stdout
 * @c: Print the character
 *
 * Return: 1 On success.
 * On error, return to be -1, and errno is set to be appropriately.
 */
int _putchar(char j)
{
return (write(1, &j, 1));
}

