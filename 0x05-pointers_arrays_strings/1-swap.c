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
	int *p;
	int *s;

	p = a;
	*p = *b;

	s = b;
	*s = *a;
}
