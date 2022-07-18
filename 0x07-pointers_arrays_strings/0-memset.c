#include "main.h"
/**
 * _memset -  assign/fill a memory with constant byte
 * @s: void pointer that contains destination
 * @b: char to be assigned
 * @n: number of byte to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
