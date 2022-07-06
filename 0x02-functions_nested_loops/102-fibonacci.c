#include <stdio.h>
/**
 * main - start
 *
 * Return: always 0
 */
int main(void)
{
	long int a = 0, b = 1, next;
	int i;
	
	for (i = 0; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;

		printf("%lu", next);
		if (i < 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
