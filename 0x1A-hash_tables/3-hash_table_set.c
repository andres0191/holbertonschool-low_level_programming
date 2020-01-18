#include "hash_tables.h"
/**
* hash_table_set - function thath adds an element to the hash table
* @ht: is the hash table you whant to add or update the key/value
* @key: is the key. Key can not be an empty string
* @value: is the value associated with the key
*
* Return: Always
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    /*hash_table_t *Add_Node;
    hash_node_t *New_Node;*/
    unsigned long int index = 0;

    New_Node = malloc(sizeof(New_Node));
    if (New_Node == NULL)
        return (0);
    if (ht == NULL || key == NULL || value == NULL)
        return (0);
    index = key_index((unsigned char *)key, ht->size);

    if(ht->value[index] == NULL)
    {
        ht->key[index] = strdup(key);
        ht->value[index] = strdup(value);
    }
    /*if (Add_Node->array[index] == NULL)

    {
        New_Node->key = strdup(key);
        New_Node->value = strdup(value);
        New_Node->next = NULL;
        Add_Node->array[index] = New_Node;
    }*/
    return (0);
}
