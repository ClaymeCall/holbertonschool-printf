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

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		/* When a '%' is found, checking all next char cases */
		if (format[i] == '%')
		{
			/* Getting the correct printer function for the format */
			printer_func = pick_printer(format[++i]);

			 /**
			  * If an invalid char was given to pick_printer(),
			  * return error code -1.
			  */
			if (printer_func == NULL)
				return (-1);

			else if (printer_func == print_other)
				print_len += print_other(format[i]);

			print_len += printer_func(args);
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
