#include "main.h"

/**
 * _puts - prints value of str
 * @str: contains string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
	}
	_putchar('\n');
}
