#include "main.h"
/**
 * _strpbrk - search a string for any set of bytes
 * @s: the string to search
 * @accept: the set of bytes to be searched for
 * Return: pointer to the matched byte if set is matched, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			return (s);
		}
		s++;
	}
	return ('\0');
}
