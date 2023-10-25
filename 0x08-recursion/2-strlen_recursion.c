#include "main.h"
/**
 * _strlen_recursion - Give length of string
 * @s: strin to be measured
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
