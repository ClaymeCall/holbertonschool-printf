#include "main.h"
#include <stdio.h>

/**
 * main - Tests the whole logic of the printf functions for printing a char.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'w';

	int i = printf("U %c U", c);
	printf("\n%d", i);

	return (0);
}
