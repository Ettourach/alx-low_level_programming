#include<header.md>

/**readme file for project 0x0E-structures_typedef
*what i will doing
*6 tasks
*/

#DEBUT

0. Poppy
I Defining a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *
file:dog.h

1. A dog is the only thing on earth that loves you more than you love yourself
mandatory
I Writing a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
file:1-init_dog.c

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
I writing a function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing
file:2-print_dog.c

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
I defining a new type of dog_t as a new name for the type struct dog
file:dog.h

4. A door is what a dog is perpetually on the wrong side of
I writing a function that creates a new dog
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
file:4-new_dog.c

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
I writing a function that frees dogs
Prototype: void free_dog(dog_t *d);
file:5-free_dog.c


#FIN
