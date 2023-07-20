#include "main.h"
/**
 * _abs  -computes an absolute value of an integer.
 *
 * @y:  the number to be computed.
 * return: absolute value of a number or zero
 */
int _abs(int y)
{
	if (y < 0)
	{
	int abs_val;

	abs_val = y * -1;
	return (abs_val);
	}
	return (y);
}	
