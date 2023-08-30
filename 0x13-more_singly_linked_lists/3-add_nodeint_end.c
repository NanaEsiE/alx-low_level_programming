#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - new node added at end of linked list.
 * @head: head of list
 * @n: data to insert in new element.
 *
 * Return: pointer new position
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
