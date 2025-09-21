#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that defines a dog
 * @name: pointer to a string for the dog's name
 * @age: float representing the dog's age
 * @owner: pointer to a string for the dog's owner
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
