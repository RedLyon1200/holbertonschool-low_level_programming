#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head of list
 * @idx: point where the node is inserted
 * @n: data for the new node to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *nNew, *temp;
	unsigned int i;

	if (!h && idx != 0)
		return (NULL);
	nNew = malloc(sizeof(dlistint_t));
	if (nNew == NULL)
		return (NULL);
	nNew->n = n;
	if (idx == 0)
	{
		if (current != NULL)
		{
			nNew->next = current;
			current->prev = nNew;
		}
		else
			nNew->next = NULL;
		nNew->prev = NULL;
		*h = nNew;
		return (*h);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (!current)
		{
			free(nNew);
			return (NULL);
		}
		current = current->next;
	}
	temp = current;
	current = current->next;
	temp->next = nNew;
	nNew->next = current;
	nNew->prev = temp;
	return (nNew);
}
