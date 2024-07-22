#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

typedef struct print_cpl
{
	char *flag;
	char (*f)(void *buffer);

} print_cpl;

int _printf(const char *format, ...);
void (*function_picker(char *s)(va_list args));
#endif
