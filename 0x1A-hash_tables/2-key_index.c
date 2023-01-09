#include "hash_tables.h"

/**
 * function - A function that will give us the index.
 * @key: key of the table
 * @size: the array size
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
