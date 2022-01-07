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

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp =  *h;
	while (--idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = tmp;
	new_element->next = tmp->next;
	tmp->next->prev = new_element;
	tmp->next = new_element;
	return (new_element);
}
