#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *created_the_buffer(char *files);
void close_the_file(int xy);

/**
* created_the_buffer - 1024 bytes for to buffer.
* @files: The file buffer is storing characters for.
*
* Return: Newly-allocated buffer for a pointer.
*/
char *created_the_buffer(char *files)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", files);
exit(99);
}

return (buff);
}

/**
* close_the_file - Closes file descriptors.
* @xy: File descriptor have to be closed.
*/
void close_the_file(int xy)
{
int b;

b = close(xy);

if (b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close xy %d\n", xy);
exit(100);
}
}

/**
* main - Files to be copies to  another file.
* @argv: The arguments for the an array of pointers.
* @argv: Number of arguments that  supplied for the program.
*
*
* Return: success on 0.
*
* Description: counted of the argument is incorrect - exit code 97.
* So if file_from does failed to exist or read - exit code 98.
* So file_to does failed to be created or written to - exit code 99.
* so if file_to or file_from failed to  be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int from, ao, s, m;
char *buff;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buff = created_the_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
s = read(from, buff, 1024);
ao = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || s == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}

m = write(ao, buff, s);
if (ao == -1 || m == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}

s = read(from, buff, 1024);
ao = open(argv[2], O_WRONLY | O_APPEND);

} while (s > 0);

free(buff);
close_the_file(from);
close_the_file(ao);

return (0);
}
