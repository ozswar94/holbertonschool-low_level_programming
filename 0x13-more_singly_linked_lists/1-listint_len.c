#include <stdio.h>
#include "lists.h"

/**
* listint_len - get number of element
* @h: head node
* Return: number of element
*/

size_t listint_len(const listint_t *h)
{
	int nb_element = 0;
	listint_t *tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		nb_element++;
		tmp = tmp->next;
	}

	return (nb_element);
}
