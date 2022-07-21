#include "main.h"
/**
 * factorial - find factorial of int n
 * @n: integer n
 *
 * Return: return factorial
 */
int factorial(int n)
{
	int f;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	f = n * factorial(n - 1);
	return (f);
}
