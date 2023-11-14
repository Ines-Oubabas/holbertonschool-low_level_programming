#include "dog.h"
#include <stdio.h>
/**
* print_dog -  function that prints
* @d: pointer
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %s\n", d->name);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
	}
}
