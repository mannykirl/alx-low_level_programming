#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 */
void print_alphabet_x10(void)
{
	int new = 0;
	char ch;

	while (new++ <= 9)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
