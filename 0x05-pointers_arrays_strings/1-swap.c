#include "main.h"
/**
 * swap_int - a function that swaps values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
