#include <stdio.h>
#include "lists.h"

/**
 * display_linked_list - displays all elements of a linked list
 * @head: pointer to the list_t list to be displayed
 *
 * Returns: the count of nodes displayed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
