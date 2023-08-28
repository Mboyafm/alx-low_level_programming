#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s: pointed destination
 * @b: The constant byte
 * @n: The number of bytes
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
