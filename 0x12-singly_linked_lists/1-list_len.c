#include "lists.h"
#include <stdlib.h>

/**
 * list_len - return the number of elements in a linked list_t
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t first = 0;

	while (h)
	{
		first++;
		h = h->next;
	}
	return (first);
}
