#include "main.h"

/**
 * print_triangle - print triangle
 * @size: number of pound sign to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	int r, c, p;

	if (size <= 0)
		_putchar('\n');
	for (r = 1; r <= size; r++)
	{
		for (c = size - r; c >= 1; --c)
		{
			_putchar(' ');
		}
		for (p = 1; p <= r; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
