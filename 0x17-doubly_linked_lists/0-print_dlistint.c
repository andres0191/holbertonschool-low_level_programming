#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t
 * @h: pointer of input
 *
 * Return: Count
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
