#include "main.h"

/**
 * function_picker - return the correct function to print the arg with
 * @s: conversion specifier
 *
 * Return: pointer to the correct function
 */
int (*function_picker(char s))(va_list args)
{
	int i = 0;

	print_cpl conv_spec_matcher[] =	{
		{'c', print_c},
		{'s', print_s},
		{'i', print_n},
		{'d', print_n},
		{'\0', NULL}
	};

	/* Iterating through the struct to try and match the char arg */
	while (conv_spec_matcher[i].conv_spec != '\0')
	{
		if (s == conv_spec_matcher[i].conv_spec)
			return (conv_spec_matcher[i].f);
		i++;
	}

	return (NULL);
}
