#include "lists.h"
dlistint_t *new_node2(const int n);
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: new data for add
 *
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nNew = NULL, *nAux = *head;

	nNew = new_node2(n);
	if (nNew != NULL)
	{
		if (!nAux)
		{
			nNew->next = *head;
			nNew->n = n;
			nNew->prev = NULL;
			*head = nNew;
		}
		else
		{
			while (nAux && nAux->next)
				nAux = nAux->next;
			nAux->next = nNew;
			nNew->prev = nAux;
			return (nNew);
		}
	}
	return (NULL);
}

/**
 * new_node2 - create a node
 * @n: data
 *
 * Return: new node
 */
dlistint_t *new_node2(const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
