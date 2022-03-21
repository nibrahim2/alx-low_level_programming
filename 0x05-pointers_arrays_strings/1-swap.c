#include"main.h"

/**
 * swap_int - swaps the value of two variables
 * @x: first variable
 * @y: swcond variable
 * Return: no value is returned
 */
void swap_int(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
