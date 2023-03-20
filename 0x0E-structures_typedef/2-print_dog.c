#include "dogg.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: the struct dog to be printed
 * @name: name
 * @age: age
 * @owner: owner
 */
void print_dog(struct dog *d)
{
char *name;
float age;
char *owner;
	{
		if (d == NULL)
return;
}
{	if (d->name == 0)
		printf ("Name: (nil)\n");
	else
		printf("Name: %s\n", d - name);
}
	{
	if (d->age < 0)
		printf("Age: (nill)\n");
	else
		printf("Age: %s\n", d - age);
}
	{
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d - owner);
	}
}
