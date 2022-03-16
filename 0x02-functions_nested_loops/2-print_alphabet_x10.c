#include "main.h"
/**
 * print_alphabet_x10 -prints the alphabets 10 times in small caps
 */
void print_alphabet_x10(void)
{
	int count = 10;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

