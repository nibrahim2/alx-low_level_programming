#include "main.h"

/**
 * _puts - prints a string
 * @str:
 * string
 */
void_puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
