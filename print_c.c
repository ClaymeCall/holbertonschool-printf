#include "main.h"

/**
 *print_c - Function that prints a single char.
 *@buffer: Address to the buffer to be printed, as void *. 
 *
 *Return : void.
 */
int print_c(va_list args)
{
	if (args != NULL)
	{
	char c = (char)va_arg(args, int);
	write(1, &c, 1);

	return (1);
	}
	else
		return (-1);
}
