#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *a = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		a = (char *)malloc(n + 1 * sizeof(char));
	if (a != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			a[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	a[i] = '\0';
	return (a);
}
