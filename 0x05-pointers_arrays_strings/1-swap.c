#include "main.h"
#include <stdio.h>
/**
* swap_int -Store the value of 'a' in 'change'
* Assign the value of 'b' to 'a'
* Assign the stored value from 'change' to 'b'
*/
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
