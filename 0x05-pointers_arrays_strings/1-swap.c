#include "main.h"
#include <stdio.h>
/**
* swap_int -Store the value of 'a' in 'change'
* @a: swaps and stores the value of b
* @b: swaps and stores the values of a
* return: return 0
*/
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
