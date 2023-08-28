#include "main.h"
/**
 * _strstr - function finds the first occurence of substring
 * @needle:input
 * @haystack:input
 * Return:Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = needle;
		char *p = haystack;

		while (*o == *p && *p != '\0')
		{
			o++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
