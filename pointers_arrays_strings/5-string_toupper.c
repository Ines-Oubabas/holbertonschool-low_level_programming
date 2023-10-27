#include "main.h"
#include <string.h>
/**
 * *string_toupper - check the code
 * @str: character to check
 * Return: changes all lowercase letters to uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
