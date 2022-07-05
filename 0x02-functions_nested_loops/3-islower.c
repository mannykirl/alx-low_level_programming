#include "main.h"
/**
 * _islower - return 1 for lowercase and otherwise
 * @c - arg
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
