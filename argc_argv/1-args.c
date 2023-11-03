#include <stdio.h>
/**
* main -  that prints the number of arguments passed into it
* @argc: variable
* @argv: variable to check
* Return: always zero
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
		printf("%d\n", argc - 1);
	return (0);
}
