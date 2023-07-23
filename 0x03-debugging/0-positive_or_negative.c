#include "main.h"
/**
 *positive_or_negative  - determine if number is postive , negative  or zero
 *0 : is the number to be checked
 *return : returns 0 for success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
	printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return;
}
