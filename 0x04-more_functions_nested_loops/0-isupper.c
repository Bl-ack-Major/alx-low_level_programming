#include "main.h"
/**
 * _isupper - Function that checks or uppercase character
 * @c: Parameter for function
 * Return: Always 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
