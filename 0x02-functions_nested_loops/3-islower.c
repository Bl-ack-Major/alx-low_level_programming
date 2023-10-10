#include "main.h"
/**
 *_islower - Checks if letter is a lowcase
 * @c: Parameter to be checked
 * Return: If lower than c 1 if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
