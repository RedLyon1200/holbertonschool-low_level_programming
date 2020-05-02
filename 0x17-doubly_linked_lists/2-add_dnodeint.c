#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: header of list
 * @n: new data for add
 *
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nNew = NULL;

	nNew = new_node(n);
	if (nNew)
	{
		nNew->next = *head;
		nNew->prev = NULL;
		if (*head)
			(*head)->prev = nNew;
		*head = nNew;
		return (nNew);
	}
	return (NULL);
}
/**
 * new_node - create a node
 * @n: data
 *
 * Return: new node
 */
dlistint_t *new_node(const int n)
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
