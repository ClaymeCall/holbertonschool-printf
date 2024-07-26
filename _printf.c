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
	int (*printer_func)(va_list args);
	int print_len = 0, i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);


	while (format[i] != '\0')
	{
		/* When a '%' is found, checking all next char cases */
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
				return (-1);
			/* Getting the correct printer function for the format */
			printer_func = pick_printer(format[i]);

			if (printer_func != NULL)
				print_len += printer_func(args);
			else
				print_len += 2;
			i++;
		}
		else
		{
		/* If no '%' is found, simply print the format string chars */
		print_len += write(1, &format[i], 1);
		i++;
		}
	}
	va_end(args);
	return (print_len);
}
