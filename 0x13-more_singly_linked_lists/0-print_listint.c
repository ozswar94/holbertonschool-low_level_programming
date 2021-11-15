#include <stdio.h>
#include "lists.h"

/**
* print_listint - print content of node
* @h: head node
* Return: number of element
*/

size_t print_listint(const listint_t *h)
{
	int nb_element = 0;
	listint_t *tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		nb_element++;
		tmp = tmp->next;
	}

	return (nb_element);
}
