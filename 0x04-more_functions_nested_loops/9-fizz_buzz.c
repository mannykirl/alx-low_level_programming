#include <stdio.h>

/**
 * main - start buzz test
 * @i: check i for number
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		putchar(i);
		putchar(' ');
	}
	if (i % 3 == 0)
		printf("Fizz");
	if(i % 5 == 0)
		printf("Buzz");
	if (i % 5 == 0 || i % 3 == 0)
		printf("FizzBuzz");
	putchar('\n');
	return (0);
}
