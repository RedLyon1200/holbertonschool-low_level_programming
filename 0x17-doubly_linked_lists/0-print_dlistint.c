#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nNum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nNum++;
		h = h->next;
	}
	return (nNum);
}
