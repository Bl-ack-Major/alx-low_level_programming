#include "main.h"
/**
 * _strprk - Searchs a string for any of a set of bytes
 * @s: Null terminated string to be scanned
 * @accept: Null terminated string containing the charaters to match
 * Return: Return pointer to byte in
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return ('\0');
}
