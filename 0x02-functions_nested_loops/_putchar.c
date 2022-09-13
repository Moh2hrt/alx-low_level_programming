#include <unistd.h>

/**
*_putchar - writes the character c to stdout
*@c: thw character to print
*Return: on success
*on error, -1 is returned, ans error is set appropriately
*/

int _putchar(char c);
{
return (write(1, &c, 1));
}
