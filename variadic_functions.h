#ifndef VARIADIC_FUNCTIONS.H
#define VARIADIC_FUNCTIONS.H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen(const char * const s);

#endif /* VARIADIC_FUNCT

