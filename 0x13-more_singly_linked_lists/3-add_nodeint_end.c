#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - new node added at end of linked list.
 * @head: head of list
 * @p: int p
 * Return: pointer current position
 */

listint_t *add_nodeint_end(listint_t **head, const int p)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->data = p;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return (*head);
}
