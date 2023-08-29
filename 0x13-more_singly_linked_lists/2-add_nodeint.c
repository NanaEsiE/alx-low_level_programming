#include "lists.h"

/**
 * add_nodeint - this adds a new node at the beginning of a linked list.
 * @head: list
 * @h: int added to list
 *
 * Return: current position.
 */

listint_t *add_nodeint(listint_t **head, const int h)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL);

	new->h = h;
	new->next = *head;
	*head = new;
	return (*head);
}
