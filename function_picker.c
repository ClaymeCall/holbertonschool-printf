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

	print_cpl flag[] = 
	{
		{'c', print_c},
		{'s', print_s},
		{'i', print_n},
		{'d', print_n},
		{'\0', NULL}
	};

	while (flag[i].flag != '\0')
	{
		if (s == flag[i].flag)
			return(flag[i].f);

		i++;
	}

	return (NULL);
}
