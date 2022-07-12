#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: contains string
 *
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
