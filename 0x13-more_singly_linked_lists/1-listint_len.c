#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked list.
 * @h: Pointer to the head of the listint_t linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
