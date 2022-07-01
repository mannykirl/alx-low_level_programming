#include <stdio.h>
/**
 * main - starting my program
 * int num - declare num
 * for - loop function
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	putchar ('\n');
	return (0);
}
