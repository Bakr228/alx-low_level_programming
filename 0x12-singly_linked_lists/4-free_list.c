#include <stdlib.h>
#include "lists.h"

/**
 * release_linked_list - deallocates a linked list
 * @list_head: list_t list to be deallocated
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
