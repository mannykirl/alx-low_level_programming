#include <stdio.h>
/**
 * main - print number of argument passed to a program
 * @argc: size of array
 * @argv: array of string
 *
 * Return: return 0
 */
int main(int argc, char **argv)
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
