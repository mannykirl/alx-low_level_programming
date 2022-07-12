#include "main.h"

/**
 * swap_int - swap value of a to b and b to a
 * @a: pointer a
 * @b: pointer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *p1;

	p1 = a;
	*p1 = *b;

	int *p2;

	p2 = b;
	*p2 = *a;
}
