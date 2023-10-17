#include "main.h"
/**
 * puts2 - Function prints every other charater of string
 * @str: Input string
 * Return: Always void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
