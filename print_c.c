#include "main.h"

/**
 *print_c - Function that prints a single char.
 *@buffer: Address to the buffer to be printed, as void *. 
 *
 *Return : size of char (1) if success, -1 if error.
 */
void print_c(void *buffer)
{
	return(write(1, buffer, 1));
}
