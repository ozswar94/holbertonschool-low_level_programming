#include <stdio.h>
#include "lists.h"

/**
* print_list - print structure list_t
* @h: Head of list
* Return: number of element of node
*/

size_t print_list(const list_t *h)
{
	size_t nb_element = 0;

	if (h == NULL)
		return (nb_element);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nb_element++;
	}

	return (nb_element);
}
