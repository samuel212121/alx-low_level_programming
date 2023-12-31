#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s:starting address of memory filed
 * @b:the desired value
 * @n:number of byte to be changed
 *
 * Return:changed array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
