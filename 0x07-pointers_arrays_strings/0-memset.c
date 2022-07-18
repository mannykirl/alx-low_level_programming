#include "main.h"
/**
 * _memset -  assign/fill a memory with constant byte
 * @s: void pointer that contains destination
 * @b: char to be assigned
 * @n: number of byte to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
