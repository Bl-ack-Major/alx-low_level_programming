#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 0 ; n <= 10 ; n++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
		_putchar(i);
	}

	_putchar('\n');
	}
}
