#include <stdio.h>
/**
 * main - starting my program
 * filedes - It is the file descriptor
 * buf - points to a character array,
 * nbyte - number of byte
 *
 * Return: return 1
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);	
	return (1);
}
