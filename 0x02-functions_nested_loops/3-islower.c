#include "main.h"
/**
 * _islower -Checks if a character is lowercase.
 * @c: The character to be checked
 * Return: returns 1 if a character is a lower case and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

