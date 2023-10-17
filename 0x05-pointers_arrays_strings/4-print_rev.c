#include "main.h"
/**
 * rev_string - Function with reverse string
 * @s: Parameter for function
 * Return: Always void
 */
void print_rev(char *s)
{
	int len = 0;

	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
		{
		_putchar(s[i]);
		}
		_putchar('\n');
}
