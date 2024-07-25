#include "main.h"

/**
 * print_s - print a string
 * @s: string  
 *
 * Return: void
 */
int print_s(va_list args)
{
	int len = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[len])
		len++;

	if (str == NULL)
		return (-1);

	write(1,str,len);

	return (len);	
}
