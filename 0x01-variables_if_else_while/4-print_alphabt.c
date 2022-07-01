#include <stdio.h>
/**
 * main - starting program
 * int ch - declaring ch
 * for - loop function
 *
 * Return: always 0
 */
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'd'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'f'; ch <= 'p'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'r'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
