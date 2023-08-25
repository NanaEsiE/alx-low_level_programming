#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list.
 * @h: pointer to list_t list.
 * Return: number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		a++;
		h = h->next;
	}

	return (a);
}
