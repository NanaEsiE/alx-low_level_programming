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
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
