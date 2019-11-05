#include "lists.h"
/**
  * delete_nodeint_at_index - delete the node at index of a linked lists
  * @head: double pointer of input
  * @index: input
  *
  * Return: Always 0
  **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *moment;
	unsigned int a = 0;

	aux = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	while (aux != NULL)
	{
		if (index == 0)
		{
			moment = *head;
			*head = moment->next;
			free(moment);
			return (1);
		}
		else if ((index - 1) == a)
		{
			moment = aux->next;
			aux->next = moment->next;
			free(moment);
			return (1);
		}
		aux = aux->next;
		a++;
	}
	return (-1);
}
