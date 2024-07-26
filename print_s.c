#include "main.h"

/**
 * print_s - Function that prints a string.
 * @args: Argument passed as va_list type.
 *
 * Return: Length of the printed string, excluding null char.
 */
int print_s(va_list args)
{
	int len = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	/* Counting the length of the string */
	while (str[len])
		len++;

	write(1, str, len);

	return (len);
}
