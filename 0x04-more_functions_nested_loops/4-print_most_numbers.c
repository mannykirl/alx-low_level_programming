#include "main.h"
/**
 * print_most_numbers - print digits except 2 & 4
 */ 
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (!(c == 2 && c == 4))
			_putchar(c);
	}
	putchar('\n');
}
