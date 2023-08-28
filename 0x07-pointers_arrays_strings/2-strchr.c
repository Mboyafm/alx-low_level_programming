#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates the charcter in a string
 * @s: The string to be located
 * @c: The input value
 * Return: Alaways 0
 */

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}
	return (NULL);
}
