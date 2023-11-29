#include "main.h"
#include <string.h>
/**
 * *_strcpy - check the code
 * @src: the character to be checked
 * @dest: the character to be checked
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n);
}
