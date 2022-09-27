#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied area
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to copied memory block
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
