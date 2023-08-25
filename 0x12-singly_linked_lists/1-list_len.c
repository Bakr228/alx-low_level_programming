#include <stdlib.h>
#include "lists.h"

/**
 * calculate_list_length - computes the number of elements in a linked list
 * @head: pointer to the start of the list
 *
 * Returns: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
