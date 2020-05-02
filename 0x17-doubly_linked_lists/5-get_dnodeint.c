#include "lists.h"
/**
 * get_dnodeint_at_index -  obtains the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: nth node to search
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nNum = 0;

	while (head)
	{
		if (nNum == index)
			return (head);
		nNum++;
		head = head->next;
	}
	printf("sad\n");
	return (NULL);
}
