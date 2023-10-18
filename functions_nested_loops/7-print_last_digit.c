#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - check the last digit of a number.
 * @lastD: the character to be checked
 * return: the value of the last digit
 */
int print_last_digit(int lastD)
{
	lastD = lastD % 10;
	if (lastD < 0)
	{
	lastD = lastD * -1;
	return (lastD);
	}
	else
		return (lastD);
}
