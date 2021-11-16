#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - revserse node
* @head: head node
* Return: first node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *cur;

	if (*head != NULL)
	{
		prev = *head;
		cur = (*head)->next;
		*head = (*head)->next;

		prev->next = NULL;
		while (*head != NULL)
		{
			*head = (*head)->next;
			cur->next = prev;
			prev = cur;
			cur = *head;
		}
		*head = prev;
	}
	return (*head);
}
