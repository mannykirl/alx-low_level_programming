#include "main.h"

/**
 * _isdigit - return 0 for digit
 * @c: c is checked for digit
 *
 * Return: return 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}
