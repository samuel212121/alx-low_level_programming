#include <stdio.h>
/**
 * print - print all possible combination of two digit number
 * Return:Alwyas 0 (Success)
 */
int main(void)
{
	int y, z;

	for (y = 0; y < 100; y++)
	{
		for (z = 0; z < 100; z++)
		{
			if (y < z)
			{
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (y != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar("\n");
	return (0);
}
