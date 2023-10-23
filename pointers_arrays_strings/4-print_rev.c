#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 *@s: the character to be checked
 * Return: prints a string, in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
