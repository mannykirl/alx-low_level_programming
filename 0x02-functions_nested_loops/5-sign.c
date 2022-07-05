#include "main.h"
/**
 * print_sign - print sign as condition are met
 * @n: argument
 *
 * Return:  0 if no condition is met
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
