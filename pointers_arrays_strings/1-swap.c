#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: character to be checked
 * @b: character to be checked
 * Return: the value of two integers
 */
void swap_int(int *a, int *b)
{
	if (a != 0 && b != 0)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}
