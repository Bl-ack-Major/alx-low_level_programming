#include "main.h"
/**
 * print_triangle - Function that prints a triangle
 * @size: Size of the triangle
 * Return: Always void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
		}
		_putchar('\n');
		}
	}
}
