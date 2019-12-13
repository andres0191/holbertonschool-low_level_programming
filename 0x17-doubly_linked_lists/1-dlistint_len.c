#include "lists.h"
/**
  * dlistint_len - function that returns the number of elements
  * @h: pointer of input
  *
  * Return: count
  **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
