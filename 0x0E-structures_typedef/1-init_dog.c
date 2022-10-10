#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = "billy";
		d -> age = 3.5;
		d -> owner = "woof";
	

	return;
}
