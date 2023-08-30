#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: The number
 * @i: iterate number
 * Return: The square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (i);
	return (_sqrt(n, i + 1));
}
