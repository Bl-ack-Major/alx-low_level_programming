#include "main.h"
/**
 * rev_string - Function the reverses string
 * @s: Parameter for function
 * Return: Always void
 */
void rev_string(char *s)
{

	if (s == 0)
		return;

	int len = 0;

	int str, end;

	for (len = 0; s[len} != '\0'; len++
	{
		continue;
	}
	end = len - 1;

	while (str < end)
	{
	char tmp;
	tmp = s[str];
	s[str] = s[end];
	s[end] = tmp;

		str++;
		end--;
	}
}
