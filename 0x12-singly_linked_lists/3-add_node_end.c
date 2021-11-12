#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* _strlen - len of string;
* @str: string
* Return: len of string
*/

size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
* add_node_end - add element on list at end of the list
* @head: head of list
* @str: string of element
* Return: return add of new_element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = _strlen((char *)str);
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
