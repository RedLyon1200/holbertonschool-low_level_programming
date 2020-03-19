#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print elements of struct
 *
 * @h: head of struct
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
        size_t totalnodes = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		totalnodes++;
	}
	return (totalnodes);
}
