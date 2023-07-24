#include "main.h"

/**
 * print_percent - Function to handle the case where %% exists
 * @args: arguments list (unused)
 *
 * Return: the number of characters printed (always 1)
 */
int print_percent(va_list args __attribute__((unused)))
{
	return (putchar('%'));
}

