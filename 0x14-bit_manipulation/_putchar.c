#include "main.h"
#include <unistd.h>
/**
 * writing the character c to stdout
 * ~c- Character to print
 * Return: On success 1.
 * In error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
