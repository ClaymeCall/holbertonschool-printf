#include "main.h"

/**
 * print_s - print a string
 * @s: string  
 *
 * Return: void
 */
void print_s(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[i])
		i++;

	if (str == NULL)
		return;

	write(1,str,i);

	
}
