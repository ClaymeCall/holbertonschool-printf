#include "main.h"

/**
 *print_c - Function that prints a single char.
 *@args: argument passed  as va_list type.
 *
 *Return: the lenght of 1 char.
 */
int print_c(va_list args)
{
	char c = (char)va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
