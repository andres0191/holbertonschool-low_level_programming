#include "lists.h"
/**
  * list_len - function that concatenate lists
  * @h: pointer of input
  *
  * Return: size of count
  **/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
