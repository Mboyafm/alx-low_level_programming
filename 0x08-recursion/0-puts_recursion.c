#include "main.h"

/**
 * _put_recursion - Prints a string followed by a newline
 * @s: The string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);
}
