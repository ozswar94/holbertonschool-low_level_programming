#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_dlistint - add all n in list
* @head: head of list
* Return: sum of all in the list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	tmp =  head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
