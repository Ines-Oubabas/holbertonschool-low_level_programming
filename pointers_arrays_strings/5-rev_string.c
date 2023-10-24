#include "main.h"
/**
 * rev_string - check the code
 * @s: character to be checked
 * Return:  reverses a string
 */
void rev_string(char *s)
{
	int i = 0;
	char tmp;
	int ln = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < (ln / 2); i++)
	{
		tmp = s[ln - i - 1];
		s[ln - i - 1] = s[i];
		s[i] = tmp;
	}

}
