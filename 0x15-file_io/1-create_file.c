#include "main.h"

/**
* create_file - Creates a file.
* @filename: Pointer to file created.
* @text_content: Pointer to a string to write to the file.
*
* Return: If the fuinction fails - -1.
*         Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int xy, m, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
while (text_content[len] != '\0')
	len++;

xy = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
m = write(xy, text_content, len);

if (xy == -1 || m == -1)
return (-1);

close(xy);

return (1);
}

