#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @l: Parameter for function
 * Return: Is x;
 */
int print_last_digit(int l)
{
	int x;

	x = l % 10;
	if (x < 0)
	x = -x;
	_putchar(x + '0');
	return (x);
}
