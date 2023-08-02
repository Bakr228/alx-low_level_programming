#include "main.h"
#include <unistd.h>

/**
 * _putchar - c char is writen to stdout
 * @c:is the character to print
 *
 * Return: 1 On success .
 * On error >> -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
