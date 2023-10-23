#include "main.h"
/**
 * _strstr- Locates a substring
 * @haystack: String to check occurence o needle
 * @needle: String to be checked
 * Return: Always Null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *z = haystack;
		char *x = needle;

		while (*haystack && *x && *haystack == *x)
		{
			haystack++;
			x++;
		}
		if (! * x)
			return (z);

		haystack = z + 1;
	}
	return ('\0');
}
