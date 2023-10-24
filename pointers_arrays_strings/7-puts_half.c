#include "main.h"
#include <string.h>
/**
 * puts_half - check the code
 * @str: character to be checked
 * Return: prints half of a string, followed by a new line.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	int n = length / 2;

		if (length % 2 != 0)
		{
			n = (length + 1) / 2;
		}
		for (i = n; i < length; i++)
		{
		_putchar(str[i]);
		}
	_putchar('\n');
}
