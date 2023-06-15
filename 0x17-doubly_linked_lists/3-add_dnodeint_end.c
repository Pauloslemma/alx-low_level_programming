#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of list
 * @head: Head of node of  Double pointer
 * @n: Node data
 * Return: New node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *last_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    last_node->next = new_node;
    new_node->prev = last_node;

    return (new_node);
}
