#include <stdio.h>
/**
 * main - starting my program
 * int ch -  initializing ch
 * for - loop function
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
