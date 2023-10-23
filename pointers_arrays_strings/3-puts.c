#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 * @*str: character to be checked
 * Return: print a string, followed by a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
