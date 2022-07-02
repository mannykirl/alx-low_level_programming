#include <stdio.h>
/**
 * main - starting programs
 * int ch - declare ch
 * for - loop function
 *
 * Return: alwayys 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
