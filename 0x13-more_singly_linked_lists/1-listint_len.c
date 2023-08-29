#include "lists.h"

/**
 * listint_len - returns num of elements in a listint_t list.
 * @p: list.
 * 
 * Return: nodes
 */

size_t listint_len(const listint_t *p)
{
	size_t i;

	for (i = 0; p; i++)
		p = p->next;
	return (i);
}
