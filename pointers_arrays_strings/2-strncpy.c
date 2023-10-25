#include "main.h"
/**
 * *_strncpy - entry point
 * @dest: character to check
 * @src: pointer
 * @n: var
 * Return: copie string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp1 = dest;
	char *tmp2 = src;

	while (src < tmp2 + n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	while (src < tmp2 + n)
	{
		*dest = '\0';
		dest++;
		src++;
	}
	dest = tmp1;
	src = tmp2;

	return (dest);
}

