#include "lists.h"
/**
  * *add_nodeint - adds a new node at the beginning of a list
  * @n: date of input
  * @head: double pointer of input
  *
  * Return: direction of new node
  **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			new->next = *head;
			new->n = n;
			*head = new;
		}
	}
	return (new);
}
