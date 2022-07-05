#include "main.h"
/**
 * print_alphabet - print alphabet a-z
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char ch;
	for (ch = "a"; ch <= "z"; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
