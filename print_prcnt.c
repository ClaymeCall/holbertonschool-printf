#include "main.h"

/**
 * print_p - print % 
 * @percent: %
 *
 * Return: void
 */
void print_%(va_list buffer)
{
	char c = '%';
	buffer = c;

	write(1,buffer,1);

}
