#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: copy src to dest
 * @src: To be copied to dest
 *
 * Return: dest_point
 */
char *_strcat(char *dest, char *src)
{
	char *pointer = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		dest++;
		src++;
		*dest = *src;
	}
	*dest = '\0';
	return (pointer);
}
