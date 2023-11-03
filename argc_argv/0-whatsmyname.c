#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: variable
 * @argv: character to check
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
