#include "main.h"
/**
 * _isupper - checks whether a character is of uppercase
 * @c: the character to be considered.
 * Return: returns 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
