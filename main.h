<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
=======
#ifndef _MAIN_H
#define _MAIN_H
>>>>>>> 904d1c59a8189e230f1016d9a82f92d8c2d26d66
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _position(const char *s, int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src, int n);
int _abs(int n);
int _numlen(int n);
void *rev_string(char *s);

/**
 * struct type - Struct data type
 *
 * @op: data type argument
 * @f: The function associated
 */
<<<<<<< HEAD
=======

>>>>>>> 904d1c59a8189e230f1016d9a82f92d8c2d26d66
typedef struct type
{
	char *op;
	char *(*f)(va_list);
<<<<<<< HEAD
}
type_t;
=======
} type_t;
>>>>>>> 904d1c59a8189e230f1016d9a82f92d8c2d26d66

char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);
char *print_bin(va_list list);
<<<<<<< HEAD

#endif /*MAIN_H*/
=======
#endif /* #ifndef _MAIN_H */
>>>>>>> 904d1c59a8189e230f1016d9a82f92d8c2d26d66
