#include "main.h"

/**
 * _strlen - print length of string
 * @s: contain string
 *
 * Return: len int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
