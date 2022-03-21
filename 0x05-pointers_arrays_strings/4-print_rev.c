#include"main.h"
/**
 * print_rev - print reverse characters
 * @s: validates the character
 * Return: returns the value 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
