#include "hash_tables.h"
/**
 * hash_table_delete - function that deltes a hash table
 * @ht: pointer of array
 * */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux_delete = NULL;

	if (ht != NULL)
    {
        while (i < ht->size)
        {
            while (ht->array[i] != NULL)
		    {
			    aux_delete = ht->array[i]->next;
			    free(ht->array[i]->key);
			    free(ht->array[i]->value);
			    free(ht->array[i]);
			    ht->array[i] = aux_delete;
		    }
		i++;
	    }
	    free(ht->array);
	    free(ht);
    }
}