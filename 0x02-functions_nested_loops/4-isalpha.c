#include "main.h"
/**
 * _isalpha - identify alphabets
 * @c: check for alpha in c
 *
 * Return: return 1 when c is alpahbet and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122) || (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
