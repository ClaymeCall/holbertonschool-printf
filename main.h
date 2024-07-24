#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

typedef struct print_cpl
{
	char *flag;
	char (*f)(va_list buffer);

} print_cpl;

int _printf(const char *format, ...);
void (*function_picker(char *s))(va_list buffer);
/* int arg_counter(char *string); */

/** Prototypes for all type printer functions */
void print_c(va_list buffer);
void print_s(va_list buffer);
void print_prcnt(va_list buffer);
#endif
