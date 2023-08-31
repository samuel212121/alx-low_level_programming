#include  "main.h"
/**
 * _pow_recursion - rettun the value of x rasied to the power of y
 * @x:value to rasied
 * @y:power
 * Return:rsult of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
