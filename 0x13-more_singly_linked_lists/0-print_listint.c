#include "lists.h"

/**
 * print_listint - prints all elements of list.
 * @p: head of list.
 *
 * Return: nodes.
 */
size_t print_listint(const listint_t *p)
{
	size_t nodes = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		nodes++;
	}
	return (nodes);
}
