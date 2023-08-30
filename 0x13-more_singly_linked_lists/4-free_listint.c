#include "lists.h"

/**
 * free_listint - free function
 * @head - describe head
 *
 * Return: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
