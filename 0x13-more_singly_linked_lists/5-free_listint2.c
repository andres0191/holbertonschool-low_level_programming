#include "lists.h"
/**
  * free_listint2 - Function that frees a listint_t list
  * @head: double pointer of input
  **/
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head != NULL)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
	free(*head);
}
