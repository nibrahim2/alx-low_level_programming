#include <stdio.h>
/**
 * main -entry point to the code block
 * Return: returns 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

