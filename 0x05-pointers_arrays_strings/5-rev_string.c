#include "main.h"
/**
 * rev_string - Reverses a string
 * @s:input string
 * Return:string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int z = 0;
	int x;

	while (s[z] != '\0')
		z++;
	for (x = 0; x < z; x++)
	{
		z--;
		rev = s[x];
		s[x] = s[z];
		s[z] = rev;
	}
}
