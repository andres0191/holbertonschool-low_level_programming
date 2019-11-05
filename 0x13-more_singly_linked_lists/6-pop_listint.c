#include "lists.h"
/**
  * pop_listint - function that deletes the head node of a linked lists
  * @head: double pointer of input
  *
  * Return: Always 0
  **/
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *aux;

	aux = *head;
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
	n = (*head)->n;
	*head = (*head)->next;
	}
	if (aux != NULL)
	{
		free(aux);
	}
	return (n);
}
