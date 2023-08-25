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
list_t *append_node(list_t **list_head, const char *data)
{
    list_t *new_node;
    list_t *temp = *list_head;
    unsigned int data_length = 0;

    while (data[data_length])
        data_length++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL;

    new_node->str = strdup(data);
    new_node->len = data_length;
    new_node->next = NULL;

    if (*list_head == NULL)
    {
        *list_head = new_node;
        return new_node;
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return new_node;
}
