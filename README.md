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

_printf("Character: %c\n", ch);\n
return (1);

A

## Testing
### Single character printing :
Expected output: A\n
printf("%c", 'A') -> : A\n
_printf("%c", 'A') -> : A\n
printf returned: 1, _printf returned: 1

Expected output: Hello\n
printf("%s", 'Hello') -> : Hello\n
_printf("%s", 'Hello') -> : Hello\n
printf returned: 5, _printf returned: 5

Expected output: %\n
printf("%%", '%') -> : %\n
_printf("%%", '%') -> : %\n
printf returned: 1, _printf returned: 1 
