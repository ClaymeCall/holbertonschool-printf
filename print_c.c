#include "main.h"

/**
 *print_c - Function that prints a single char.
 *@buffer: Address to the buffer to be printed, as void *. 
 *
 *Return : void.
 */
void print_c(void *buffer)
{
	write(1, buffer, 1);
}
