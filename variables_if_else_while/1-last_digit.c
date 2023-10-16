#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	/* your code goes there */
	if (lastDigit > 5)
		printf("Last digit of %d is %u greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("lastDigit of %d is 0\n", n);
	else if (lastDigit > 0 && lastDigit < 6)
		printf("lastDigit of %d is %u less than 6 and not 0\n", n, lastDigit);
	return (0);
}
