#include "main.h"

/** 
 * function_picker - return the correct function to print the arg with
 * @char: conversion specifier
 *
 * Return: pointer to the correct function
 */
void (*function_picker(char *s)(va_list args))
{
	int i = 0;

	print_cpl flag[] = 
	{
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_d},
		{NULL, NULL}
	}

	while (ops[i].op != NULL)
	{
		if (*s == *flag[i].flag && s[1] != '\0')
			return(flag[i].f);

		i++;
	}

}
