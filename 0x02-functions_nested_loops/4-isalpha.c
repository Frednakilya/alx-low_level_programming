#include "main.h"

/**
 * _isalpha -alphabet letter
 * @c -is character to be checked
 * return: returns 1 for alphabet letter or 0 for anything else
 */
int _isalpha(int c)
{
	if(c >= 65 && c <= 97) || (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}	
