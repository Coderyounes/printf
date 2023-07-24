#include "main.h"

/**
 * _printf - Function to Print data
 *
 * @format: indetifier characherts
 *
 * Return: the total printed chars
 */

int _printf(const char *format, ...)
{
	int printed_characters = 0;
	int (*print_func)(va_list);
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			print_func = get_print_func(*format);
			if (print_func != NULL)
				printed_characters += print_func(args);
			else
			{
				putchar('%');
				putchar(*format);
				printed_characters += 2;
			}
		}
		else
		{
			putchar(*format);
			printed_characters++;
		}

		format++;
	}

	va_end(args);

	return (printed_characters);
}

