#include "main.h"

/**
 * reset_to_98 - reset value of n to 98
 * @n: assign value to n
 *
 * Return: return new value of n
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;

	return (n);
}

