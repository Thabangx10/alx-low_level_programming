#include "hash_tables.h"

/**
 * Function - prints out the hash table
 * @ht: hash table
 * Return - A dictionary format of the the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("'%s' : '%s'", temp->key, temp->value);
			if (ht->array[i + 1] == NULL)
				break;
			printf(", ");
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
