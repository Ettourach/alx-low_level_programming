#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic information
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Description: This structure represents basic information about a dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

#endif
