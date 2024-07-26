#include "main.h"

/**
 * print_other - Print anything that is not handle by other printers.
 * @c: conversion specifier as char.
 *
 * Return: Count of printed chars.
 */
int print_other(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);

	return (2);
}
