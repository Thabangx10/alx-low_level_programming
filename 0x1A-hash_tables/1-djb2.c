#include "hash_tables.h"

/**
 * Function: The use of the djb2 algorithm.
 * @str: The string hash
 * Return: return the caculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
