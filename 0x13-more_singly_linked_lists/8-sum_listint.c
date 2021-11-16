#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - add all node of element
* @head: head node
* Return: sum of all emelent
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
