#include "main.h"

/**
 * print_char - Function print Characters
 *
 * Description: This function handle c identifier to print one char
 *
 * @args: list of args contain char
 *
 * Return: 1 to calculate the length of the printed characters
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	putchar(ch);

	return (1);
}
