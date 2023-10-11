#include "main.h"
/**
 * times_table - function that calculates sum
 * for: Nested loop that calculates sum
 */
void times_table(void)
{
	int i, n, sum;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
	{
			sum = i * n;

			if (n == 0)
			{
				_putchar('0' + sum);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (sum < 10)
					_putchar(' ');

				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
