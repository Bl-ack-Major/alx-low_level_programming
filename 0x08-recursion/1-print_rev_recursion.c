#include "main.h"
/**
 * _print_rev_recursion - Function that prints rev string
 * @s: Parameter string
 * Return: Always  Void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
