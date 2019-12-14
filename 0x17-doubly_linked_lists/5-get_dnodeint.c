#include "lists.h"
/**
  * get_dnodeint_at_index - function that return the nth node
  * @head: pointer of input
  * @index: date of input
  *
  * Return: Always 0
  **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = head;
	if (head == NULL)
	{
		return (NULL);
	}
	for (; i <= index; i++)
	{
		if (i == index)
		{
			return (aux);
		}
		aux = aux->next;
	}
	return (NULL);
}
