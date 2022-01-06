#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - get element at index
* @head: head of list
* @index: index search
* Return: number of element of lists
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (0);
	tmp =  head;
	while (tmp != NULL && index > i)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
