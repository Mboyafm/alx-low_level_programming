#include "main.h"

/**
 * _strncat - concatenates two strings
 * @des: destination of the string
 * @src: source of the string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
