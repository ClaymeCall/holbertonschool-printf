#include "main.h"

/**
 * pick_printer - return the correct function to print the arg with
 * @c: conversion specifier
 *
 * Return: pointer to the correct function
 */
int (*pick_printer(char c))(va_list args)
{
	int i = 0;

	print_cpl conv_spec_tbl[] =	{
		{'c', print_c},
		{'s', print_s},
		{'%', print_prcnt},
		{'i', print_n},
		{'d', print_n},
		{'\0', NULL}
	};

	if (c == '\0')
		return (NULL);

	/* Iterating through the table to try and match the char arg */
	while (conv_spec_tbl[i].conv_spec != '\0')
	{
		if (c == conv_spec_tbl[i].conv_spec)
			return (conv_spec_tbl[i].f);
		i++;
	}

	return (print_other);
}
