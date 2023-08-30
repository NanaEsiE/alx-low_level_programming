#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pops off list.
 * @head: head of the list.
 * Return: contents of head node.
 */

int pop_listint(listint_t **head)
{
	int p;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);

	tmp = current = *head;

	if (*head)
	{
		p = current->data;
		*head = current->next;
		free(tmp);
	}
	else
		p = 0;
	return (p);
}
