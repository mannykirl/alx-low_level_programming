#include "main.h"
/**
 * print_last_digit - print last digit of value in var
 * @n: variable
 *
 * Return: always lastdigit
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
