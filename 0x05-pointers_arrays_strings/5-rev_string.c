#include "main.h"
/**
 * rev_string - reverse string
 * @s: contains string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}
