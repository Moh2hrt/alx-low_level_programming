#include <stdio.h>

/**
*print_to_98 - Prints all natural numbers
*in order separated by a comma followed by a space
*@n: Number to begin counting at.
*/
void print_to_98(int n)
{
if (n >= 98)
{
	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
}

else
{
	while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
}
}
