#include "main.h"

/**
 * print_str - Function print String
 *
 * Description: this function handle s identifier to print strings
 *
 * @args: list of args contain strings
 *
 * Return: len , the length of the printed chars
 */
int print_str(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
}
