#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: var n
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
			n--;
	}
	printf("98");
	putchar('\n');
}
