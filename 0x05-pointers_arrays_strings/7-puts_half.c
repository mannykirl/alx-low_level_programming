#include "main.h"

/**
 * puts_half - print 2nd half of str
 * @str: contains string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int s = 0;
	int len = 0;
	int d;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
		d = len / 2;
	else
		d = (len + 1) / 2;
	for (s = d; s < len; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

