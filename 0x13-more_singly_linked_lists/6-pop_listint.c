#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pops off list.
 * @head: head of the list.
 * Return: contents of head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
