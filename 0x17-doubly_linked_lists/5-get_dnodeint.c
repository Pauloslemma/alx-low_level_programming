#include "lists.h"

/**
* get_dnodeint_at_index - get the node of a linked list
* @head: the head of the list
* @index: index
* Return: data of the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
return (current);
current = current->next;
i++;
}
return (NULL);
}
