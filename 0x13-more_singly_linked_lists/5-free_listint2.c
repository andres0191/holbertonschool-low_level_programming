#include "lists.h"
/**
  * free_listint2 - Function that frees a listint_t list
  * @head: double pointer of input
  **/
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			aux = *head;
			*head = aux->next;
			free(aux);
		}
	}
	else
	{
		return;
	}
	free(*head);
	*head = NULL;
}
