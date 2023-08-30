#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of listint_t.
 * @head: place in list.
 * @p: int element.
 * Return: pointer position,  NULL if fails.
 */

listint_t *add_nodeint(listint_t **head, const int p)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->p = p;
	new->next = *head;
	*head = new;

	return (*head);
}
