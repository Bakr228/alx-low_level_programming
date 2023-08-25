#include <stdlib.h>
#include "lists.h"

/**
 * release_linked_list - deallocates a linked list
 * @list_head: list_t list to be deallocated
 */
void release_linked_list(list_t *list_head)
{
    list_t *temp;

    while (list_head)
    {
        temp = list_head->next;
        free(list_head->str);
        free(list_head);
        list_head = temp;
    }
}
