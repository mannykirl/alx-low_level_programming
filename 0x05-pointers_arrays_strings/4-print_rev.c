#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: contains string
 *
 * Return: void
 */
void print_rev(char *s)
{
	for (s = 0; s > 0; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
