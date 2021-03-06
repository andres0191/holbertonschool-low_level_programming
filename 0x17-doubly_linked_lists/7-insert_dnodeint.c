#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node
  * @h: double pointer of input
  * @idx: data of input
  * @n: data of input
  *
  * Return: newnode
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int count = 0;

	temp = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	if (idx == count)
	{
		temp = add_dnodeint_end(h, n);
		return (temp);
	}
	count = 0;
	temp = *h;
	while (count < idx && temp)
	{
		temp = temp->next;
		count++;
	}
	newnode->next = temp;
	newnode->prev = temp->prev;
	temp->prev = newnode;
	temp = newnode->prev;
	temp->next = newnode;
	newnode->n = n;
	return (newnode);
}
