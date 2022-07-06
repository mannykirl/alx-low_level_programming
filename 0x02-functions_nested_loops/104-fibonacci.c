#include <stdio.h>
/**
 * main - start
 *
 * Return: 0
 */
int main(void)
{
	long int a = 0, b = 1, next;
	int i;

	for (i = 0; i <= 98; i++)
	{
		next = a + b;
		a = b;
		b = next;

		printf("%lu, \n", next);
	}
	return (0);
}
