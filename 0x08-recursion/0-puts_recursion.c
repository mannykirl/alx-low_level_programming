#include "main.h"

void _puts_recursion(char *s)
{
	char p = s;

	if (s <= '\0')
		return;
	_putchar(p);
	p = (*s + 1);
}
