#include"main.h"

/**
 * puts2 - print reverse characters
 * @str: validates a character
 * Return: return 0
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
