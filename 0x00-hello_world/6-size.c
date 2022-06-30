#include <stdio.h>

/**
 * main - starting my program
 * int intTYPE - data type
 *
 * Return: 0 either-way
 */
int main(void)
{
	int intTYPE
	float floatTYPE;
	char charTYPE;
	long int longTYPE;
	long long int longlongTYPE;
/**
 * sizeof - evaluates size of a variable
 * printf - prints value in enclosed bracket appropriately
 * @parameterbyte(s\n - newline
 * sizeof(charTYPE - evaluate size of char
 */
	printf("Size of a char: %zu byte(s)\n", sizeof(charTYPE));
	printf("Size of an int: %zu byte(s)\n", sizeof(intTYPE));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longTYPE));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongTYPE));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatTYPE));
/* return - 0 */
	return (0);
}
