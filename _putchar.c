#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @buffer: the string to print
 * @buff_size: number of buffer to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char buffer[], int *buff_size)
{
	int n =write(1, &buffer,*buff_size);
	*buff_size = 0;
	return (n);
}
