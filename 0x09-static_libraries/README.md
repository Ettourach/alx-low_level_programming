#include<header.md>

/**readme file for 0x09. C - Static libraries
*what i will doing
/*

0. A library is not a luxury but one of the necessities of life
i will creating the static library libmy.a containing all the functions listed below
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
cha:ar *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle)
If you haven’t coded all of the above functions create empty ones with the right prototype

1. Without libraries what have we? We have no past and no future
i will creating a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory

#fin

