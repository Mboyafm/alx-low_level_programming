#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer of the first string
 * @s2: Pointer of the second string
 * Return: If str1 < str2, the negative difference
 * of the first unmatched character
 * If str1 == str2, 0
 * If str1 > str2, the positive difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)

	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
