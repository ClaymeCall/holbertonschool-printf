#include "main.h"

/**
 *print_c - Function that prints a single char.
 *@args: Argument passed as va_list type.
 *
 *Return: the length of 1 char.
 */
int print_c(va_list args)
{
	char c = (char)va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
