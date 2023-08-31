#include "lists.h"

/**
 * my_print_listint - displays all elements in a linked list
 * @head: linked list of type listint_t to be displayed
 *
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
