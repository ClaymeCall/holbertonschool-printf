#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct print_cpl
{
	char flag;
	int (*f)(va_list args);

} print_cpl;

int _printf(const char *format, ...);
int (*function_picker(char s))(va_list args);

/** Prototypes for all type printer functions */
int print_c(va_list args);
int print_s(va_list args);
int print_n(va_list args);
#endif
