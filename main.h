#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct id_printf - Structure for handling print functions
 * @idt: identifier character
 * @p: Pointer to print function
 */
typedef struct id_printf
{
	char *idt;
	int (*p)(va_list);
} id_printf;

int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
void _write_char(char c);
int selector(const char *format, id_printf f_arr[], va_list args);
int _printf(const char *format, ...);


#endif /* MAIN_H */

