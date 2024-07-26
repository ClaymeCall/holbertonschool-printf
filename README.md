# _printf

## Description
This project aims to create a function similar to printf. We will name this function _printf

## Compilation/instalation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Requirements
- '%s' : Prints a string
- '%c' : Prints a single character
- '%%' : Prints '%'

## Examples
char ch = 'A';

_printf("Character: %c\n", ch);
return (1);

A

## Testing
If I want to test a single character by comparing printf and _printf :
Expected output: A
printf("%c", 'A') -> : A
_printf("%c", 'A') -> : A
printf returned: 1, _printf returned: 1 
