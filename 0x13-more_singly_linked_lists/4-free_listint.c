#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free function
 * @head: describe head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
