#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: pointer to char, the dog's name
 * @age: float, the dog's age
 * @owner: pointer to char, the dog's owner
 *
 * Description: This function initializes the members of
 * the struct dog with the values provided as arguments.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
