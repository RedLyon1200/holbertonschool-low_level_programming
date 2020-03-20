#include "lists.h"

/**
 * add_node - add new node
 * @head: pointer to pointer
 * @str: str for add
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *AddNode;

	if (head == NULL)
		return (NULL);

	AddNode = malloc(sizeof(list_t));
	if (AddNode == NULL)
		return (NULL);

	if (*head == NULL)
		AddNode->next = NULL;
	else
		AddNode->next = *head;
	AddNode->str = strdup(str);
	AddNode->len = _strlen(str);
	*head = AddNode;
	return (*head);
}

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Return: size of string
 */
int _strlen(const char *s)
{
	int size = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		size = _strlen(s + 1);
		size++;
	}
	return (size);
}
