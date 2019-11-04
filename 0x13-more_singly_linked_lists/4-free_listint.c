#include "lists.h"
/**
  * free_listint - functiont that frees a lists
  * @head: pointer of input
  **/
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = aux->next;
		free(aux);
	}
	free(head);
}
