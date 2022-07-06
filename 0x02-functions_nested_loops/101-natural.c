#include <stdio.h>
/**
 * main - start
 *
 * Return: always 0
 */
int main(void)
{
	int c = 0, sum = 0;

	for (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}

