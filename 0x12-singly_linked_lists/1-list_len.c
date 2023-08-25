#include <stdlib.h>
#include "lists.h"

/**
 * calculate_list_length - computes the number of elements in a linked list
 * @head: pointer to the start of the list
 *
 * Returns: number of elements in the linked list
 */
size_t calculate_list_length(const list_t *head)
{
    size_t count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}
