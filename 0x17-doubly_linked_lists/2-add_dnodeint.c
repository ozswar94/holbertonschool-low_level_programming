#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - size of list
* @head: head of list
* @n: n in list
* Return: new element or NULL if fail malloc
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

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
	new_element->next = *head;
	(*head)->prev = new_element;
	*head = new_element;
	return (new_element);
}
