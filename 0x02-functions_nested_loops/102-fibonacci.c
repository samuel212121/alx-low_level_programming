#include <stdio.h>
/**
 * main - print 50 fibonacci number starting with 1 and 2
 * separetd by  comma and followed by a space
 * Return:Always 0
 */
int main(void)
{
	int z;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (z = 0; z < 50; z++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (z == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}

