#include "hash_tables.h"
/**
* hash_table_print - function thath prints a hash table
* @ht: array of hash table
**/
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    int bandera;

    if (ht != NULL)
        printf("{");
    while (i < ht->size)
    {
        while( ht->array[i])
        {
            if ( i > 0 && bandera = 1)
                printf(", ");
            printf("'%s' : '%s'", ht->array[i]->key);
            ht->array[i] = ht->array[i]->next;
            if (ht->array[i] != NULL)
                bandera = 0;
                printf(", ");
                continue;
        }
        bandera = 1;
        i++;
    }
    printf("}");
}