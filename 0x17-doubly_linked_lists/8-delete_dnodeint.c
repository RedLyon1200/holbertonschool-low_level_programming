#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specified index in a
 * doubly linked list
 * @head: the head node of thr list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful and -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *deleteNode, *temp;
	unsigned int i;

	i = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		deleteNode = *head;
		if (deleteNode->next != NULL)
			*head = deleteNode->next;
		else
			*head = NULL;
		free(deleteNode);
		return (1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (i + 1 == index)
		{
			deleteNode = temp->next;
			temp->next = deleteNode->next;
			free(deleteNode);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
