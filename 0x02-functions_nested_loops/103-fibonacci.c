#include <stdio.h>
/**
 * main - start
 *
 * Return: always 0
 */
int main(void)
{
	long int a = 0, b = 1, next;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (b % 2 == 0)
			sum += next;
	}
	printf("%i", sum);
	putchar('\n');
	return (0);
}
