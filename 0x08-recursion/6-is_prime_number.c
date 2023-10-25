#include "main.h"
/**
 * is_prime - Detects if input is prime no.
 * @n: input no.
 * @c: iterator
 * Return: 1 if n is prime no. 0 if not
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - detects if input no. is prime
 * @n: input no.
 * Return: 1 if n is prime no. 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
