#include "main.h"

/**
 * print_most_numbers - checks for a digit from 0 to 9
 *
 * Return: returns 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
