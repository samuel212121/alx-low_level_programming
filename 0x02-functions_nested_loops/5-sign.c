#include "main.h"
/**
 * print_sign - print a sign of number
 * @n:n is in in to int
 * Return:1 if n is graterthan 0
 * 0 n is equl to 0
 * -1 n is lessthan 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}


		
