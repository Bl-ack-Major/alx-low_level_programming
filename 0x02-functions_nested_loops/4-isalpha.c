#include "main.h"
/**
 * _isalpha - Checks for lower and upper case letter
 * @c: A Peremeter
 * Return: Is 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'C' && c <= 'Z'))
		return (1);
	else
		return (0);
}
