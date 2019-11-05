#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a linked lists.
  * @head: pointer of input
  * @index: input
  *
  * Return: if the node does not exist return NULL
  **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (a = 0; a != index; a++)
	{
		head = head->next;
	}
	return (head);
}
