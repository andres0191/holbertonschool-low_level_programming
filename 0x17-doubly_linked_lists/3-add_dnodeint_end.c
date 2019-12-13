#include "lists.h"
/**
  * add_dnodeint_end - function that adds a new node
  * @head: double pointer of input
  * @n: date of input
  *
  * Return: Always count
  **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *box, *temp;

	box = malloc(sizeof(box));
	temp = *head;
	if (box == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		box->next = NULL;
		box->prev = NULL;
		box->n = n;
		*head = box;
		return (box);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	box->prev = temp;
	box->n = n;
	temp->next = box;
	box->next = NULL;
	return (box);
}
