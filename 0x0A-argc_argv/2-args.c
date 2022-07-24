#include <stdio.h>
/**
 * main - print argument received
 * @argc: size of array
 * @argv: array of string
 *
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
