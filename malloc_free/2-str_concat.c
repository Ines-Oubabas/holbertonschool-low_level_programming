#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		while (s1[i] != '\0')
		{
			i++;
		}
		while (s2[j] != '\0')
		{
			j++;
		}
		s = (char *)malloc(i + j + 1);
			if (s)
			{
				for (k = 0; s1[k]; k++)
				{
					s[k] = s1[k];
				}
				for (k = 0; s2[k]; k++)
				{
					s[i + k] = s2[k];
				}
				s[i + j] = '\0';
				return (s);
			}
			else
			{
				return (NULL);
			}
}
