#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint - print element of list
* @h: head of list
* Return: number of element of lists
*/

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	tmp = (dlistint_t *) h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		len++;
	}
	return (len);
}
