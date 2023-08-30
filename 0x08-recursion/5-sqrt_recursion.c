#include <stdio.h>
#include "main.h"

int _sqrt_recursion(int n, int i);

/**
 * *_sqrt_recursion - Returns the natural square root of a number
 * @n; The number
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -  a function that returns the natural square root of a number
 * @n: The number
 * @i: iterate number
 * Return: The natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
}
