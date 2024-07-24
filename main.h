#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

typedef struct print_cpl
{
	char flag;
	void (*f)(va_list args);

} print_cpl;

int _printf(const char *format, ...);
void (*function_picker(char s))(va_list args);
/* int arg_counter(char *string); */

/** Prototypes for all type printer functions */
void print_c(va_list args);
void print_s(va_list args);
#endif
