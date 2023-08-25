#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * append_node - appends a new node to the end of a linked list
 * @list_head: double pointer to the list_t list
 * @data: string to be placed in the new node
 *
 * Returns: address of the newly added element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
