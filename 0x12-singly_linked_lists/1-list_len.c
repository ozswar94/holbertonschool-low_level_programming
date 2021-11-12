#include <stdio.h>
#include "lists.h"

/**
* list_len - compte number element of nodes
* @h: Head of list
* Return: number of element
*/

size_t list_len(const list_t *h)
{
	size_t nb_element = 0;

	if (h == NULL)
		return (nb_element);

	while (h != NULL)
	{
		h = h->next;
		nb_element++;
	}

	return (nb_element);
}
