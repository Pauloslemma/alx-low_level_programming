#include"main.h"
#include<stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number to letters to read
* Return: m-actual number of bytes read and printed
*	0 when the function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *abc;
ssize_t xy;
ssize_t m = 0;
ssize_t p;

xy = open(filename, O_RDONLY);
if (xy == -1)
return (0);

abc = malloc(sizeof(char) * letters);
if (abc == NULL)
close(xy);
return (0);

while ((p = read(xy, abc, letters)) > 0)
m += write(STDOUT_FILENO, abc, p);

free(abc);
close(xy);

return (m);
}

