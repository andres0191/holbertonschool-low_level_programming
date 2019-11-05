#include "lists.h"
/**
  * insert_nodeint_at_index - function that inserts a new node
  * @head : double pointer of input
  * @idx : posicion for insert
  * @n : date of input
  *
  * Return: Always 0
  **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 1;
	listint_t *new_node, *aux;

	if (*head == NULL)
	{
		return (NULL);
	}
	aux = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		for (; a != idx; a++)
		{
			aux = aux->next;
		}
		new_node->n = n;
		new_node->next = aux->next;
		aux->next = new_node;
		return (new_node);
	}
	return (new_node);
}
