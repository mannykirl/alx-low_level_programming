#include "main.h"

void rev_string(char *s)
{
	int i, j, len = 0;
	int rev;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len; i++)
	{
		rev[i] = s[j];
		j--;
	}
}
