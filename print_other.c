#include "main.h"

/**
 * print_other - Print anything that is not handle by other printers.
 * @args: argument passed as va_list type.
 *
 * Return: Count of printed chars.
 */
int print_other(va_list args)
{
	/* Casting the arg as void because we don't use it*/
	(void)args;
	write(1, "%", 1);

	return (1);
}
