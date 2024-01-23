#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
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

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints the information of a dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog with given information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees memory allocated for a dog struct
 * @d: pointer to the struct dog
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copies a string from source to destination
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s);

#endif

