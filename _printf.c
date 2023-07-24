#include "main.h"

/**
 * _printf - similar to printf function
 * @format: const char containing the format specifier
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int p_chars;
	id_printf f_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	p_chars = selector(format, f_arr, args);
	va_end(args);

	return (p_chars);
}

