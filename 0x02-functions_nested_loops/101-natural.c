#include <stdio.h>
/**
 * main - list all natural number below 1024(exclude)
 * that are  a multiple of 3 and 5
 * Return:Always 0 (Successs)
 */
int  main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum + = i;
	}
	printf("%d", sum);
	return (0);
}
