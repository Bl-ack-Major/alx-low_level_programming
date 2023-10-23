#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: byte from memory area to copy
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
