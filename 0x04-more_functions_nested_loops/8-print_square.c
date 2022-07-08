#include "main.h"

/**
 * print_square - print square
 * @size: size of the square
 */

void print_square(int size)
{
	int c, j;

	if (size <= 0)
		_putchar('\n');

	for (c = 0; c < size; c++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

