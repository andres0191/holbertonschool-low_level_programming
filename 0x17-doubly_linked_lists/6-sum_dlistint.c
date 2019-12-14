#include "lists.h"
/**
  * sum_dlistint - function that returns the sum of all the data
  * @head: pointer of input
  *
  * Return: Always the sum of data
  **/
int sum_dlistint(dlistint_t *head)
{
	unsigned int save = 0;
	dlistint_t *aux;

	aux = head;
	while (aux != NULL)
	{
		save = aux->n + save;
		aux = aux->next;
	}
	return (save);
}
