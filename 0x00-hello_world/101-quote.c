#include <stdio.h>
/**
 * write - initialize write to replace printf
 * @filedes - It is the file descriptor which has been obtained from the call to open
 * @buf - points to a character array,
 * @nbyte - number of byte
 * main - starting my program
 *
 * Return - return 1
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	
	return (1);
}
