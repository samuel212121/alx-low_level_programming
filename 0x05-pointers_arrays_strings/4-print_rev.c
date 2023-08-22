#include "main.h"
/**
 *  print_rev - imprime en reversa
 *  @s:string
 *  Retun :0
 */
void print_rev(char *s)
{
	int longi = 0;
	int t;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (t = longi; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
