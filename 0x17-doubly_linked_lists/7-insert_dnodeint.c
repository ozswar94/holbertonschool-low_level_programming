#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new element in the list
* @h: head of list
* @idx: index search
* @n: n in list
* Return: new element insert
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_element;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	tmp =  *h;
	while (tmp != NULL && idx > ++i)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	new_element->next = tmp->next;
	new_element->prev = tmp;
	tmp->next = new_element;
	return (tmp);
}
