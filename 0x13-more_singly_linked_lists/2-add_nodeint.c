#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of listint_t.
 * @head: place in list.
 * @s: int element.
 * Return: pointer position,  NULL if fails.
 */

listint_t *add_nodeint(listint_t **head, const int s)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->data = s;
	new->next = *head;
	*head = new;

	return (*head);
}
