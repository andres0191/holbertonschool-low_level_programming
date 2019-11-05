#include "lists.h"
/**
  * sum_listint - return the sum of all the data
  * @head: pointer of input
  *
  * Return: value of sum
  **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
