#include "hash_tables.h"

/**
 * key_index - function that gives you key index.
 *
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: an index.
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
