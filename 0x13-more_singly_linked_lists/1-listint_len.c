#include "lists.h"

/**
 * listint-len - prints elements in linked list.
 * @p: list.
 *
 * Return: nodes.
 */

size_t listint_len(const listint_t *p)
{
	size_t nodes = 0;

	while (p !=NULL)
	{
		p = p->next;
		nodes++;
	}
	return(nodes)
}
