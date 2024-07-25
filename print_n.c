#include "main.h"

/**
 * print_n - print number in standard output.
 * @args: argument passed as va_list type.
 *
 * Return: the number of char printed.
 */
int print_n(va_list args)
{
	long int i = 0;
	long int len = 0;
	int minus_len = 0;
	long int div = 10;
	long int number = va_arg(args, int);
	char *digit_list;

	if (number == 0)
		return (write(1, "0", 1));

	if (number < 0)
	{
		minus_len += write(1, "-", 1);
		number *= -1;
	}

	while (number / div != 0)
	{
		len++;
		div *= 10;
	}

	len++;
	div /= 10;
	digit_list = malloc(len * sizeof(char));

	if (digit_list == NULL)
		return (-1);

	while (i < len)
	{
		digit_list[i] = ((number / div) % 10) + '0';
		i++;
		div /= 10;
	}

	write(1, digit_list, len);
	free(digit_list);
	return (len + minus_len);
}
