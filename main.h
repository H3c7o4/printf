#ifndef _MAIN_H
#define _MAIN_H
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

typedef struct type
{
	char *op;
	char *(*f)(va_list);
} type_t;

char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);
char *print_bin(va_list list);
#endif /* #ifndef _MAIN_H */
