#include "main.h"

/**
 *print_c - Function that prints a single char.
 *@buffer: Address to the buffer to be printed, as void *. 
 *
 *Return : void.
 */
void print_c(va_list args)
{
	char c = (char)va_arg(args, int);
	write(1, &c, 1);
}
