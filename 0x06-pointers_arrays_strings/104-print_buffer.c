Yohanis Alx, [3/2/2023 9:32 PM]
#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
p[5] = 98 ;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

Yohanis Alx, [3/2/2023 9:38 PM]
#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints buffer
* @b: buffer
* @size: size
* Return: void
*/

void print_buffer(char *b, int size)
{
int o, j, i;

o = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (o < size)
{
j = size - o < 10 ? size - o : 10;
printf("%08x: ", o);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + o + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < j; i++)
{
int c = *(b + o + i);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
}
}
