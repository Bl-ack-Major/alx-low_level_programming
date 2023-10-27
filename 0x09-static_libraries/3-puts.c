#include "main.h"
/**
 * _puts - Function for string
 * @str: Parameter for function
 * Return: Always Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
