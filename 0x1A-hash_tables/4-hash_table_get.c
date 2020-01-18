#include "hash_tables.h"
/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: pointer of input
* @key: pointer of input
*
* Return: Always char
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	dlistint_t *aux;
	unsigned int i = 0;
 
	aux = ht;
	if (ht == NULL)
		return (NULL);
	for (; i <= key; i++)
	{
		if (i == key)
			return (aux);
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}
	return (NULL);
}
