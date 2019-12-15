#include "lists.h"
/**
  * insert_dnodeint_at_index - function that inserts a new node at a given position
  * @h: double pointer of input
  * @idx: data of input
  * @n: data of input
  *
  * Return: Always 0
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int i = 0;

	temp = *h;
	newnode = malloc(sizeof(newnode));
	if (newnode == NULL)
	{
		return (NULL);
	}
		if (*h == NULL)
		{
			*h = newnode;
			(*h)->prev = NULL;
			(*h)->next = NULL;
			(*h)->n = n;
			return (*h);
		}
		for (i = 0; temp->next != NULL || i == idx; i++)
		{
			if (i == idx)
			{
				newnode->n = n;
				newnode->next = temp;
				newnode->prev = temp->prev;
				temp->prev = newnode;
				temp->prev->next = newnode;
				return (newnode);
			}
			temp = temp->next;
		}
		return (newnode);
}
