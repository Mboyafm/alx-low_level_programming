#include "main.h"

/**
 * _memcpy - Copies the memory area
 * @dest: The destination of the file
 * @src: The source file
 * @n: input
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
