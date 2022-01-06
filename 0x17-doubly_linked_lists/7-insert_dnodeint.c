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

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	if (idx == 0)
	{
		new_element->next = *h;
		new_element->prev = NULL;
		*h = new_element;
		return (new_element);
	}
	if (*h == NULL)
	{
		new_element->next = NULL;
		new_element->prev = NULL;
		*h = new_element;
		return (new_element);
	}
	tmp =  *h;
	while (tmp != NULL && --idx)
	{
		tmp = tmp->next;
	}
	if (idx != 0)
		return (NULL);
	new_element->next = tmp->next;
	new_element->prev = tmp;
	tmp->next = new_element;
	return (new_element);
}
