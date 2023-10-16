#include "main.h"
/**
 * swap_int - Function swaps a and b
 * @a: Parameter 1
 * @b: Parameter 2
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
