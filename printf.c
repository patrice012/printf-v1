#include <stdarg.h>
#include <stdio.h>
#include "main.h"


/**
  * _printf - print all arguments
  * @format: input format
  * Return: Number of bytes write in stdout
  */

int _printf(const char *format, ...)
{
	int j = 0, i = 0, buff_index = 0;
	int t_write = 0;
	/* initialize va_list pointer */
	va_list op;

	/* create a temp array of char */
	char buffer[BUFF_SIZE];

	va_start(op, format);

	if (!format)
		return (-1);

	/* start printing the first arg */
	while (format[i] != '\0' && format[i])
	{

		if (format[i] != '%')
		{
			/* copy the current char into temporary array buffer */
			buffer[buff_index++] = format[i];

			/* if it is the last character*/
			if (buff_index++ == BUFF_SIZE)
			{
				/* write in stdout */
				t_write += _putchar(buffer, &buff_index);
			}

			buffer[buff_index++] = format[i];
		}
		i++;
	}

	printf("value of j:%d", t_write);

	return (j);
}
