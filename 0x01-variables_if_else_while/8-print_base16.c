#include <stdio.h>
/**
 * main - starting my program
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
