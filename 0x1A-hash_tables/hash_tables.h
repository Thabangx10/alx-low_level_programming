#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * function - Node of a hash table
 * @key: The key, string (the 'key' is unique in a hash table.
 * @value: The corresponding value of the key
 * @next: A pointer to the next node within the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * function - The structure of the hash table
 * @size: the size of the array
 * @array: An array of size(@size)
 * Handling - We are going to be using collision handling within our hash table
 * using pointers
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */