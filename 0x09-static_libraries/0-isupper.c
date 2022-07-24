#include "main.h"

/**
 * _isupper - return 1 for uppercase char
 * @c: c is checked for upper case
 *
 * Return: return 1 if upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
