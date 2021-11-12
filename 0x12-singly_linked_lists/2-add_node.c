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
* add_node - add element on list
* @head: head of list
* @str: string of element
* Return: return add of new_element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen((char *)str);
	new->next = *head;
	*head = new;

	return (new);
}
