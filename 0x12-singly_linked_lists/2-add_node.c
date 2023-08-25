#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_node_at_beginning - inserts a new node at the start of a linked list
 * @list_head: double pointer to the list_t list
 * @data: new string data to include in the node
 *
 * Returns: the address of the newly added element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
