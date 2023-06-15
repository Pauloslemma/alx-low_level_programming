#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: double pointer to the head of the list
* @n: value of the new node
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/* Check if head is NULL */
if (head == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Set the value of the new node */
new_node->n = n;

/* Set the prev pointer of the new node to NULL */
new_node->prev = NULL;

/* Set the next pointer of the new node to point to the current head */
new_node->next = *head;

/* If the list is not empty, update the prev pointer of the current head */
if (*head != NULL)
(*head)->prev = new_node;

/* Update the value of head to point to the new node */
*head = new_node;

/* Return the address of the new node */
return (new_node);
}
