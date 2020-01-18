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
    hash_table_t **Add_Node;
    hash_node_t *New_Node;



    *Add_Node = malloc(sizeof(*Add_Node));
    if (*Add_Node == NULL)
        return NULL;
    New_Node = malloc(sizeof(New_Node));
    if (New_Node == NULL)
        return NULL;
    if (ht == NULL || key == NULL || value == NULL)
        return 0;
    number = hash_djb2(key);
    index = key_index(number);
    if (Add_Node->array[index] == NULL)
    {
        New_Node->key = key;
        New_Node->value = value;
        New_Node->next = NULL;
    }
    Add_Node->array[index] = New_Node;
    return (New_Node);
}
