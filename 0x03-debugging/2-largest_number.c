#include "main.h"

/**
 * largest_number - returns the largest of the 3 numbers
 * @a: integer number1
 * @b: integer number2
 * @c: integer number3
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
