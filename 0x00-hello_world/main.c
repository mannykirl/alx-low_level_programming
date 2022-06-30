#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int write(int filedes);
int main( int argc, char** argv )
{

	write(1, "jssi\n", 13);
	
	return (0);

}
