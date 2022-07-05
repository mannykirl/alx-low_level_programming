#include "main.h"
/**
 * times_table - times table from 0
 */
void times_table(void)
{
	int m, k, d;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (k = 1; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');

			d = m * k

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
