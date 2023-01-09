#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * function(hash_node_s) - Node of a hash table
 * @key: The key, string (the 'key' is unique in a hash table).
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

/**
 * function(shash_node_s) - The node from the sorted table.
 * @key: The key, string - (the 'key' is unique in the Hash Table).
 * @value: the corresponding value to the key
 * @next: * to the next node in the list
 * @sprev: A * to the previous element pf the sorted linked list.
 * @snext: A * to the next element of the sprted linked list.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * function (shash_table_s) - Sorted hash table data structure
 * @size: the size of the array
 * @array: an array of the same size
 * We want to handle 'Chaining collision' that is caused by multipile data entries
 * in a single cell of an array.
 *
 * It will handle it by pointing each node of the list to point at the first node
 * of the linked list.
 * @shead: A * to the first element of the sorted linked list
 * @stail: A * to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int **array;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
