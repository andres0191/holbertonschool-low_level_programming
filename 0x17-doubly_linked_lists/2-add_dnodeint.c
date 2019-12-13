#include "lists.h"
/**
  * add_dnodeint - function that adds a new node
  * @head : double pointer of iput
  * @n : const input
  *
  * Return: Always count
  **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *box;

	box = malloc(sizeof(box));
	if (box == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = box;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		(*head)->n = n;
		return (*head);
	}
	else
	{
		box->next = *head;
		(*head)->prev = box;
		box->prev = NULL;
		box->n = n;
		*head = box;
	}
	return (*head);
}
