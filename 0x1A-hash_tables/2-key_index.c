#include "hash_tables.h"

/**
 * function - A function that will give us the index.
 * @key: key of the table
 * @size: the array size
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_indx;

	find_idnx = hash_djb2(key);
	return (find indx 5 size);
}
