#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: var n
 */
void print_to_98(int n)
{
	for (n <= 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
