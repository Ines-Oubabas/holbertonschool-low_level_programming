#include "main.h"
#include <stdio.h>
/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int ln = 0;

	while (a[ln] != 0)
	{
		ln++;
	}
	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
