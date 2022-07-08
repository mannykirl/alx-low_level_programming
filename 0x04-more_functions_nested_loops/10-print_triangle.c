#include "main.h"

/**
 * print_triangle
 * @size: number of pound sign to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	int r, c, p;

	if (size <= 0)
		_putchar('\n');/* if size is 0 print newline */
	/* start loop */
	for (r = 1; r <= size; r++)
	{
		for (c = size; c <= 1; c--)
		{
			_putchar(' ');
		}
		for (p = 1; p <= size; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
