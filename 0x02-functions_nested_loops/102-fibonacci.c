#include <stdio.h>
/**
 * main - start
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0, b = 1, next;
	int i;
	
	for (i = 0; i <= 50; i++)
	{
		next = a + b;
		a = b;
		b = next;

		printf("%i, ", next);
	}
	putchar('\n');
	return (0);
}
