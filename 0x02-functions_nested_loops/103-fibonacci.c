#include <stdio.h>
/**
 * main - start
 *
 * Return: always 0
 */
int main(void)
{
	long int a, b, next;
	int sum = 0;

	while (b < 4000000)
	{
		next = a + b;
		a = b;
		b = next;

		if (b % 2 == 0)
			sum += b;
		printf("%i", sum);
	}
	putchar('\n');
	return (0);
}
