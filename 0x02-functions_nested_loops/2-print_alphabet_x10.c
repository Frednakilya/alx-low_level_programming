#include "main.h"
/**
 * print_alphabet_x10 -alphabet x10 times
 *
 * return:void
 */
void print_alphabet_x10(void)
{
        char az;
	int i;
	i = 0;
	while(i<10)
	{
	for (az = 'a'; az <= 'z'; az++)
	{
	_putchar(az);
	}
	_putchar('\n');
	i++;
	}
}
