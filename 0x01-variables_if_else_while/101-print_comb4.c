#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (i = j; j <= 9; j++)
		{
		if (i == j)
		{
			continue;
		}
			for (k = j; k <= 9; k++)
			{
			if (j == k)
			{
				continue;
			}
				putchar ((i % 10) + '0');
				putchar ((j % 10) + '0');
				putchar ((k % 10) + '0');
			if (i == 7 && j == 8 && k == 9)
			{
				continue;
			}
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
