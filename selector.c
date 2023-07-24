#include "main.h"

/**
 * selector - Function to identify the Data type handler
 * @format: Format specifier
 * @f_arr: array of functions needed
 * @args: arguments to print
 *
 * Return: number of characters printed
 */
int selector(const char *format, id_printf f_arr[], va_list args)
{
	int i, j, rtn, length = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_write_char('%');
				length++;
				i++;
			}
			else
			{
				for (j = 0; f_arr[j].idt != NULL; j++)
				{
					if (format[i + 1] == f_arr[j].idt[0])
					{
						rtn = f_arr[j].p(args);
						if (rtn == -1)
							return (-1);
						length += rtn;
						break;
					}
				}
				if (f_arr[j].idt == NULL && format[i + 1] != ' ')
				{
					_write_char(format[i]);
					length++;
				}
				i++;
			}
		}
		else
		{
			_write_char(format[i]);
			length++;
		}
	}
	return (length);
}

