#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name using a given function
* @name: Pointer to a character string (name to be printed)
* @f: Pointer to a function that prints a character string
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
