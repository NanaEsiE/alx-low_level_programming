#include "lists.h"

/**
 * sum_listint - sum of all the data  on linked list.
 * @head: head of list.
 * Return: summ of all data.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->data;
		head = head->next;
	}

	return (sum);
}
