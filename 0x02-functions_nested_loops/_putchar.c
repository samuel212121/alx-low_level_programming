#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charcter to stdout
 * @c:The charcter to print
 *
 * return: on Success 1
 * on error -1 returned  and errno is set appropraitly 
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
