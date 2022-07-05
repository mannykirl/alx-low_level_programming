#include "main.h"
/**
 * print_alphabet - print alphabet a-z
 */
void print_alphabet(void)
{
	char ch;
	for (ch = "97"; ch <= "112"; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
