#include "main.h"

/**
 * print_s - function that's print a string.
 * @args: arguments passed to va_list type.
 *
 * Return: lenght of th eprinted string exclude null char.
 */
int print_s(va_list args)
{
	int len = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;


	write(1, str, len);

	return (len);
}
