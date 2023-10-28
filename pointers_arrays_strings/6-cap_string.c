#include "main.h"
/**
 * *cap_string - capitalizes all words in a string
 * @str: the string to capitalize
 * Return: capitalizes all words
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' &&
				(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
				 || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
				 || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
				 || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
				 || str[i - 1] == '{' || str[i - 1] == '}'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
