#include "main.h"

/**
 * print_n - Prints a number to standard output.
 * @args: Argument passed as va_list type.
 *
 * Return: The number of chars printed, including '-' sign.
 */
int print_n(va_list args)
{
	long int i = 0, len = 0;
	int minus_len = 0;
	long int div = 10;
	long int num = va_arg(args, int);
	char *digit_list;

	if (num == 0)
		return (write(1, "0", 1));

	/* Absolute value; counting the '-' in separate variable */
	if (num < 0)
	{
		minus_len += write(1, "-", 1);
		num *= -1;
	}

	/* Finding the count of digits, and the highest divisor for the num */
	while (num / div != 0)
	{
		len++;
		div *= 10;
	}

	len++;
	div /= 10;
	digit_list = malloc(len * sizeof(char));

	if (digit_list == NULL)
		return (-1);
	/* Populating digit_list with each digit of the number */
	while (i < len)
	{
		digit_list[i] = ((num / div) % 10) + '0';
		i++;
		div /= 10;
	}

	write(1, digit_list, len);
	free(digit_list);
	return (len + minus_len);
}
