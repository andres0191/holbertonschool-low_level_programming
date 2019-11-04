#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: double pointer of input
  * @n: input
  *
  * Return: count of elements
  **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		else
		{
			while (aux->next != NULL)
			{
				aux = aux->next;
			}
		aux->next = new;
		}
	}
	return (new);
}
