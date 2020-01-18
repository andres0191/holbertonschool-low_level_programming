#include "hash_table.h"
/**
  * key_index - Function that gives you the index of a key
  * @key: pointer of input, key is the key
  * @size: is the size of the array of the hash table
  *
  * Return: Always unsigned long int
  **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
