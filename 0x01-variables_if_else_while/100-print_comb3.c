#include <stdio.h>
/**
 * main - starting program
 * int i - declare i
 * int j - declare j
 *
 * Return: always 0
 */
int main(void)
{
	int i, digit;

	for (i = 0; i <= 9; i++)
	{
	if (i == 8 && digit == 9)
		{
			break;
		}
		for (digit = i; digit <= 9; digit++)
		{
		if (i == digit)
		{
			continue;
		}
			putchar ((i % 10) + '0');
			putchar ((digit % 10) + '0');
		if (i == 8 && digit == 9)
		{
			break;
		}
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
