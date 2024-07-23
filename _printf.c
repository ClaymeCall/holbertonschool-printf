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
	int i = 0;
	unsigned int arg_count = arg_counter(format);

	va_start (args, arg_count);
	
	if (format)
		return (0);

	while (format[i])
	{
		if (format[i] == '%')
			function_picker(format[i + 1])
	}

	
}
