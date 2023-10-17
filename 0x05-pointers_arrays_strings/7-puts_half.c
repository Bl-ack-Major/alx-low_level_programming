#include "main.h"
/**
 * puts_half - Prints second half of string
 * @str: The input string
 * Return: Always void
 */
void puts_half(char *str)
{
	int l = 0;

	int i, srt;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		srt = l / 2;
	}
	else
	{
		srt = (l - 1) / 2;
	}
	for (i = srt; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
