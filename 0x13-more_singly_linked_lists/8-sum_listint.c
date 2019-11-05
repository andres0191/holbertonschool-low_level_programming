#include "lists.h"
/**
  * sum_listint - return the sum of all the data
  * @head: pointer of input
  *
  * Return: value of sum
  **/
int sum_listint(listint_t *head)
{
	listint_t *sum;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		sum += head->n + (head->next;
	}
	return (sum);
}
