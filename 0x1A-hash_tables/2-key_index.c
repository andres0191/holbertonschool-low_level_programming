#include "hash_tables.h"
/*
* key_index : function that gives you the index of a key
* @key: key of the directory
* @size: size of table
*
* Return: Always idx
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int idx;
    idx = hash_djb2(key) % size;
    return idx;
}