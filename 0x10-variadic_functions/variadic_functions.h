#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct sign - sign struct
 *
 * @sign:format sign
 * @d:the associated func
*/
typedef struct sign 
{
	char *sign;
	void (*d)(char *, va_list);
} sign_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
