#include "main.h"

/**
 *print_prcnt - Function that prints a single '%' char.
 *@args: Argument passed as va_list type, casted as void because it's unused.
 *
 *Return: the length of 1 char.
 */
int print_prcnt(va_list args)
{
	/* Casting the arg as void because we don't use it*/
	(void)args;

	return (write(1, "%", 1));
}
