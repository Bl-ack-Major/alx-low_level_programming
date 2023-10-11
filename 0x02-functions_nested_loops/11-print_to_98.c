#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function that prints natural no. for n to 98
 * @n: The parameter for starting no.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
				if (i != 98)
				{
					printf(", ");
				}
		}
	}
	else
	{
		for (i = n; i <= 98; i--)
		{
			printf("%d", i);
				if (i != 98)
				{
					printf(", ");
				}
		}
	}
	printf("\n");
}
