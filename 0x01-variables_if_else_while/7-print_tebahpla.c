#include <stdio.h>
/**
 * main - print reverse of lower case letter
 * followed new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch > = 'a'; ch--)
	{ 
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
 
	
