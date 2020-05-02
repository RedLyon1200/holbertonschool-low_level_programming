#include "lists.h"
/**
 * dlistint_len - count the number of elements in a linked dlistint_t list.
 * @h: pointer to header of list
 *
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nNum = 0;

	while (h)
	{
		nNum++;
		h = h->next;
	}
	return (nNum);
}
