#include <stdio.h>
#include "../main.h"


/**
 * main - Tests all expected behaviours of printf.
 *
 * Return: 0
 */
int main(void)
{
	int printf_ret, _printf_ret;

	printf("_printf tester program\n");
	printf("----------------------\n\n");

	printf("Testing single character\n");
	printf("Expected output: A\n");
	printf("printf(\"%%c\", 'A') -> : ");
	printf_ret = printf("%c", 'A');
	printf("\n_printf(\"%%c\", 'A') -> : ");
	_printf_ret = _printf("%c", 'A');
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	printf("Testing string\n");
	printf("Expected output: Hello\n");
	printf("printf(\"%%s\", \"Hello\") -> : ");
	printf_ret = printf("%s", "Hello");
	printf("\n_printf(\"%%s\", \"Hello\") -> : ");
	_printf_ret = _printf("%s", "Hello");
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	printf("Testing percent sign\n");
	printf("Expected output: %%\n");
	printf("printf(\"%%%%\") -> : ");
	printf_ret = printf("%%");
	printf("\n_printf(\"%%%%\") -> : ");
	_printf_ret = _printf("%%");
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	printf("Testing positive integer\n");
	printf("Expected output: 123\n");
	printf("printf(\"%%d\", 123) -> : ");
	printf_ret = printf("%d", 123);
	printf("\n_printf(\"%%d\", 123) -> : ");
	_printf_ret = _printf("%d", 123);
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	printf("Testing negative integer\n");
	printf("Expected output: -123\n");
	printf("printf(\"%%d\", -123) -> : ");
	printf_ret = printf("%d", -123);
	printf("\n_printf(\"%%d\", -123) -> : ");
	_printf_ret = _printf("%d", -123);
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	printf("Testing multiple specifiers\n");
	printf("Expected output: Char: B, String: World, Int: 321\n");
	printf("printf(\"Char: %%c, String: %%s, Int: %%d\", 'B', \"World\", 321) -> : ");
	printf_ret = printf("Char: %c, String: %s, Int: %d", 'B', "World", 321);
	printf("\n_printf(\"Char: %%c, String: %%s, Int: %%d\", 'B', \"World\", 321) -> : ");
	_printf_ret = _printf("Char: %c, String: %s, Int: %d", 'B', "World", 321);
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	printf("Testing single %% in format\n");
	printf("Expected output:\n");
	printf("printf(\"%%\") -> :");
	printf_ret = printf("%");
	printf("\n_printf(\"%%\") -> :");
	_printf_ret = _printf("%");
	printf("\nprintf returned: %d, _printf returned: %d\n", printf_ret, _printf_ret);
	printf("\n----------------------\n");

	return (0);
}
