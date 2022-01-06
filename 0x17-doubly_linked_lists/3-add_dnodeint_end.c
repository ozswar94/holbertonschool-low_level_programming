#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - add new element in the end of list
* @head: head of list
* @n: n in list
* Return: new element or NULL if fail malloc
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *tmp;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	if (*head == NULL)
	{
		new_element->next = NULL;
		new_element->prev = NULL;
		*head = new_element;
		return (new_element);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_element;
	new_element->prev = tmp;
	return (new_element);
}
