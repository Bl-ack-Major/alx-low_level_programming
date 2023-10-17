#include "main.h"
#include <stdio.h>
/**
 * print_array(int *a, int n);
 * @a: Parameter 1
 * @n: Parameter 2
 * Return: Always void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
