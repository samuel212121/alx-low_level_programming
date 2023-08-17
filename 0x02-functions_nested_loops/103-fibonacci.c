#include <stdio.h>
/**
 * main - print he Fibonacci sequence whose values do not exceed 4,000,000,
 * prints the sum of the even-valued terms
 * followed by new line
 * Return:Always 0
 */
int main(void)
{
	int x;
	unsigned long int y, z, next, sum;

	y = 1;
	z = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) ==)
		{
			sum = sum + y;
		}
		next = y + z;
		y = z;
		z = next;
	}
	printf("%lu\n", sum);
	return (0);
}
