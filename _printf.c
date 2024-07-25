#include "main.h"

/**
 *_printf - Prints anything and any arguments, following a format string.
 *@format: String that holds all the formatting information to be followed.
 *
 *Return: The count of char printed, excluding the ending null byte.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int print_len = 0, i = 0;

	va_start(args, format);

	/* Checking if argument is null pointer */
	if (format == NULL)
		return (-1);

	/* Iterating through format string */
	while (format[i] != '\0')
	{
		/* When a '%' is found, checking all next char cases */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break;
			else if (format[i + 1] == '%')
			{
				write(1, "%", 1);
				i++;
				print_len++;
			}
			else
			{
				i++;
				print_len += function_picker(format[i])(args);
			}
		}
		/* If no '%' is found, simply print the format string chars */
		else
		{
			write(1, &format[i], 1);
			print_len++;
		}
		i++;
	}
	va_end(args);
	return (print_len);
}
