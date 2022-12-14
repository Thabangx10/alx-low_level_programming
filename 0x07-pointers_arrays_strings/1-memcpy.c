#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied area
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
        }
	return (dest);
}
