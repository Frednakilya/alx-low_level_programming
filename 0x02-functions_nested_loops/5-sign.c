#include "main.h"
/**
 * print_sign -prints asign of a number.
 *
 * @n: the number to be printed
 * return: 1 for postive num , -1 for negative num and 0 for anything els.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}	
