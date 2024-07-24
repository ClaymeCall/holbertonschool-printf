#include "main.h"

/** 
 * function_picker - return the correct function to print the arg with
 * @s: conversion specifier
 *
 * Return: pointer to the correct function
 */
void (*function_picker(char *s))(va_list buffer)
{
	int i = 0;

	print_cpl flag[] = 
	{
		{"c", print_c},
		{"s", print_s},
		{"%", print_prcnt},
		{NULL, NULL}
	}

	while (flag[i].flag != '\0')
	{
		if (s == flag[i].flag)
			return(flag[i].f);

		i++;
	}

}
