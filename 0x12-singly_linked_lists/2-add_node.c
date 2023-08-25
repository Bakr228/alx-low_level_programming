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
list_t *insert_node_at_beginning(list_t **list_head, const char *data)
{
    list_t *new_node;
    unsigned int data_length = 0;

    while (data[data_length])
        data_length++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL;

    new_node->str = strdup(data);
    new_node->len = data_length;
    new_node->next = (*list_head);
    (*list_head) = new_node;

    return (*list_head);
}
