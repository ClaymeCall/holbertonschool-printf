#include "main.h"

/**
 * arg_counter - Counts the number of % flags in a string to deduce how many
 * args are in the variadic list.
 * @string: String to count the %s in
 *
 * Return: the count of args as unsigned int.
 */
unsigned int arg_counter(char *string)
{
	int i = 0;
	unsigned int arg_count = 0;

	if (string == NULL)
		return (0);

	while (string[i])
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '\0')
				break;

			if (string[i + 1] == '%')
				i++;

			else
				arg_count++;

		}

		i++;
	}

	return (arg_count);
}
