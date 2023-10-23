#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 * @*str: character to be checked
 * @str: character to be checked
 * Return: print a string, followed by a new line
 */
void _puts(char *str)
{
	int length = 0;

	while (*str != 0)
	{
		length++;
		str++;
	}
	{
		length++;
		_putchar(*str);
	}
	_putchar('\n');
}
