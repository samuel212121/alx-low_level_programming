#include "main.h"
/**
 * print_last_digit - print the last digit of number
 * @n:the int filter the value of last digit
 * Return:the value of last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n > 0)
		n = -n;
	x = n % 10;

	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (0);
}
