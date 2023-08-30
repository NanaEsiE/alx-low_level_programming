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

	while (head = NULL)
		return;

	free_listint(head->next);
	free(head);
}
