#include "main.h"
/**
 * _isalpha - check wether it is lowercase or uppercase
 * @c:the charcter to be checked
 * Return:1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
