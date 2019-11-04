#include "lists.h"
/**
  * print_listint - function that print the all elements
  * @h: pointer of input
  *
  * Return: count of character
  **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
