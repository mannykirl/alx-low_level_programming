#include "main.h"

/**
 * *_strcpy - copy src into dest
 * @dest: destination
 * @src: source
 *
 * Return: container
 */
char *_strcpy(char *dest, char *src)
{
	char *container = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (container);
}
