#include "main.h"
/**
 * factorial - return the factorial number
 * @n:number to return the factoria from
 * Return:Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return  (-1);
	if  (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
