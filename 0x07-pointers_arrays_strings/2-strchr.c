#include "main.h"
/**
 * _strchr - locate charcter in string
 * @s: source string
 * @c: character to find
 * Return: String from character found
 */
char *_strchr(char *s, char c)
{
	int z = 0, x;

	while (s[z])
	{
		z++;
	}
	for (x = 0; x <= z; x++)
	{
		if (c == s[x])
		{
			s += x;
			return (s);
		}
	}
	return ('\0');
}
