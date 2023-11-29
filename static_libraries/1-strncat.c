#include "main.h"
/**
 * *_strncat - check the code
 * @dest: character to check
 * @src: character to check
 * @n: character to check
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ln = 0, i;

	while (dest[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[ln + i] = src[i];
	}
	return (dest);
}
