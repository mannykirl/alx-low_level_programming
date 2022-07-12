#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: contains string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = _strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len/2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	_putchar('\n');
}
