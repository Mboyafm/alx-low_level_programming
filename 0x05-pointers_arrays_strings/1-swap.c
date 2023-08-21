#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @x: The first integer
 * @y: The second integer
 * Return: nothing
 */

void swap_int(int *x, int *y)

{
	int temp = *x;
	*x = *y;
	*y = temp;
}
