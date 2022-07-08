#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of time to print line
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int i;

	if(n <= 0)
		_putchar('\n');
	for(i = 0; i < n; i++)
	{
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
