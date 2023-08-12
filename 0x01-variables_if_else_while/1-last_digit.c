#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last ditgit randomly number
 * decide wether it is grater than 5, less than 6 and 0
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("last digit %d is %d and grater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		prrintf("last digit of %d is %d and is less than 6 doesnot 0\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
