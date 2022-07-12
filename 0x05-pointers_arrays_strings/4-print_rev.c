#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: contains string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char c = *s;

	while (*s == c)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
