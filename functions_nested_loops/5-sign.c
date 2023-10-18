#include <stdio.h>
#include "main.h"
/**
 * print_sign - check if character is greater than zero, less than zero, zero.
 * @n: the character to be checked.
 * return value of print_sign.
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 otherwise.
 * Print: + if n is greater than zero, 0 if n is zero, - otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
