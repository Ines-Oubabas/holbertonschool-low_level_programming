#include "main.h"
#include <stdio.h>

/**
* _abs - check if the function computes the absolute value of an integer.
* @i: the character to be checked.
* Return: i is positif.
*/
int _abs(int i)
{
	if (i < 0)
	{
	i = i * (-1);
	return (i);
	}
	else
	return (i);
}
