#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *struct print_cpl - Contains a conversion specifier and its printing function.
 *@conv_spec: Conversion specifier as char.
 *@f: Pointer to a printing function, specific to a data type.
 *
 *Description: This struct will be used to match a conversion specifier
 *to its corresponding printing function.
 */
typedef struct print_cpl
{
	char conv_spec;
	int (*f)(va_list args);

} print_cpl;

int _printf(const char *format, ...);
int (*pick_printer(char c))(va_list args);

/** Prototypes for all type printer functions */
int print_c(va_list args);
int print_s(va_list args);
int print_prcnt(va_list args);
int print_n(va_list args);
#endif
