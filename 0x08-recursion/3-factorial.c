#include "main.h"
/**
 * factorial - searchs for the factorial of a number
 * @n: No. to find factorial of
 * Return: Factorial of the no.
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	next = factorial(n - 1);
	return (n * next);
}
