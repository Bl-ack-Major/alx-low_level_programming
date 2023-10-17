#include "main.h"
/**
 * puts2 - Function prints every other charater of string
 * @str: Input string
 * Return: Always void
 */
void puts2(char *str)
{
	int i = 0;

	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
		_putchar(str[i]);
		i += 2;
		}
	}
	_putchar('\n');
}
