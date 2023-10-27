#include "main.h"
/**
 * _strlen - Function prints length of string
 * @s: Parameter for function
 * Return: Always len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
