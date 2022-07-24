#include <stdio.h>
#include <stdlib.h>

int notdigit(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 48 || s[i] > 57))
		{
			return (1);
		}
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i, sum = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		if (!notdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
