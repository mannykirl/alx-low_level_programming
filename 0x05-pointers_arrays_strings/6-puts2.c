#include "main.h"

/**
 * puts2 - prints the char in string in two's
 * @str: contains string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i += 2;)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
