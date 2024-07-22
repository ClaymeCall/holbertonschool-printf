#include "main.h"

/** 
 * function_picker - return the correct function to print the arg with
 * @s: conversion specifier
 *
 * Return: pointer to the correct function
 */
void (*function_picker(char *s))(void *buffer)
{
	int i = 0;

	print_cpl flag[] = 
	{
		{'c', print_c},
		{'s', print_s},
		{NULL, NULL}
	}

	while (flag[i].flag != NULL)
	{
		if (*s == *flag[i].flag && s[1] == '\0')
			return(flag[i].f);

		i++;
	}

}
