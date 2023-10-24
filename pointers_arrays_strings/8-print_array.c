#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - check the code
 * @a: the character to be checked
 * @n: the character to be checked
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
