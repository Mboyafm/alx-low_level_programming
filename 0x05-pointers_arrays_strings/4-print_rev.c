#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @t: The string to print
 * Return: void
 */

void print_rev(char *t)
{
	int c = 0;

	while (t[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >=  0; c--)
	{
	_putchar(t[c]);
	}
	_putchar('\n');
}
