#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - size of list
* @h: head of list
* Return: number of element of lists
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	tmp = (dlistint_t *) h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
