#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int s, t;

	for (s = 48; s <= 56; s++)
	{
		for (t = 49; t <= 57; t++)
		{
			if (t > s)
			{
				putchar(s);
				putchar(t);
				if (s != 56 || t != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
