#include "main.h"
/**
 * _strspn - Lenght of a prefix substring
 * @s: Null termininated string to be scanned
 * @accept: Null terminated string containing charaters to match
 * Return: Always count
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
