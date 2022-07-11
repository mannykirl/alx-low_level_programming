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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar ('\n');
	return (0);
}
