#include "lists.h"

/**
 * listint_len - Computes the number of elements in a linked list.
 * @h: Pointer to the head of the listint_t linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0; // Initialize a counter to keep track of nodes.

    while (h) // Iterate through the linked list.
    {
        num++; // Increment the counter for each node.
        h = h->next; // Move to the next node.
    }

    return (num); // Return the total number of nodes.
}
