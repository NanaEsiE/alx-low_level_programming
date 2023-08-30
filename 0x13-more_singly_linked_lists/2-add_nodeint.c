#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of listint_t.
 * @head: place in list.
 * @n: int element.
 *
 * Return: pointer position, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
