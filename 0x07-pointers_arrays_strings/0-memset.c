#include "main.h"
/**
 * _memset - Fill memory with constant byte
 * @s: memory area to fill
 * @b: constant byte to ill
 * @n: bytes of memory area to fill
 * Return: the memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
