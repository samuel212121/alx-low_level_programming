#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest:memory where stored
 * @src:memory where copied
 * @n:number of byte
 * Return:copied memory with n byte  changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
