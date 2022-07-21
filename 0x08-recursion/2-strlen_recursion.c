#include "main.h"
/**
 * _strlen_recursion - print string length
 * @s: containd string
 *
 * Return: return lenth of string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
