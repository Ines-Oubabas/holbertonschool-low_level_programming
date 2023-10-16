#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	for (i = '0', c = 'a'; i <= '9' && c <= 'f'; i++, c++)
	{
	putchar(i);
	putchar(c);
	}
	putchar('\n');
	return (0);
}
