#include "lists.h"
/**
  * free_dlistint - funchito that free a dlistint_t list
  * @head: pointer of input
  **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *clear = head;

	while (clear)
	{
		free(&head->n);
		head = clear->next;
		clear = clear->next;
	}
	free(head);
}
