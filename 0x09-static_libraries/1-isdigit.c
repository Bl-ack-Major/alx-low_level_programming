#include "main.h"
/**
 * _isdigit - Function that checks digit
 * @c: Parameter for function
 * Return: Always 1 for true 0 for false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
