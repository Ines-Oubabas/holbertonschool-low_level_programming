#include "main.h"
/**
 * print_chessboard - print the chessboard.
 * @a: ptr ptr
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
		_putchar(a[y][x]);
	}
	_putchar('\n');
	}
}
