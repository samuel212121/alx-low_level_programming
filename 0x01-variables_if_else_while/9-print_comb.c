#include <stdio.h>
/**
 * main - print all posible combination of single digit number
 * Return: Always 0 (Success)
 */
int main(void)
{              
	        int x;

                for (int x = 48; x < 58; x++)
	{
	        putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar('');
		}
		putchar('\n');
		return (0);
	}
}

