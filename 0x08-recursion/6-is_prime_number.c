#include "main.h"
#include <stdio.h>

/**
 * _prime_a - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @a: input
 * @b: divisor
 * Return: always 0 (success)
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - Checks for prime numbers
 * @n: the number to be checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
