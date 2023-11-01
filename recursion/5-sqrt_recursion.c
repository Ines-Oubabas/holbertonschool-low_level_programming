#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursive - function that returns the natural
 * @n: number that calculate the naturel square root
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursive(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter of the function
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursive(n, 1));
}
