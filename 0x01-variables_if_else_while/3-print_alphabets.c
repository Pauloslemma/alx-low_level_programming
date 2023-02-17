#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -main block
 * descrpition: print the alphabet in lower case
 * and the in uppercase, follow by new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

  	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	
	putchar('\n');
	return (0);
}	
