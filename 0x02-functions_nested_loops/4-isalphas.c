#include "main.h"
#include <stdio.h>
/**
*_isalpha - checks for alphabetic characters
* @c - is  charactto be checked
* return: 1 is alphabetic or 0 for anything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}	



