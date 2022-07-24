#include <stdio.h>
#include <stdlib.h>
/**
 * digit - check for digit
 * @s: string that will be checked
 *
 * Return: return 0
 */
int digit(char *s)
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
/**
 * main - add positive number
 * @argc: size of array
 * @argv: array of string
 *
 * Return: return 0
 */
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
		if (!digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
