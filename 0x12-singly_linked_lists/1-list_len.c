#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - count elements of struct
 *
 * @h: head of struct
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t totalnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		totalnodes++;
	}
	return (totalnodes);
}
