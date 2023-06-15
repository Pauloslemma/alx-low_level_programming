#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Elements of a dlistint list
* @h: Pointer to head of list
* Return: On success 1
* On error, -1 is returned, and errno is set appropriately.
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current;
size_t size = 0;

current = h;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
size++;
}
return (size);
}
