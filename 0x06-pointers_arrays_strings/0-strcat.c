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
	char *dest_point = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		break;
	}
	return (dest_point);
}
