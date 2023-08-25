#include "lists.h"

/**
 * print_list - prints all elements of the list_t list.
 * @n: linked list.
 * Return: number of nodes in the linked list.
 */

size_t print_list(const list_t *n)
{
	size_t count = 0;

	while (n != NULL)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", n->len, n->str);

		count++;
		n = n->next;
	}

	return (count);
}
