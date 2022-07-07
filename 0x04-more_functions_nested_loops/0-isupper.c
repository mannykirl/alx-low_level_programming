#include "main.h"
/**
 * _isupper - return 1 for uppercase char
 * @c: c is checked for upper case
 *
 * Return: return 0 if condition not met
 */
int _isupper(int c)
{
	
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}