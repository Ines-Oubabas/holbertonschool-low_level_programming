#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - check the code
 *@*s: the character to be checked
 *@s: the member to be checked
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
