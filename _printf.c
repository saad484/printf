#include "main.h"

/**
 * _printf - Custom printf function
 *
 * @format: the format string
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
int i, chars_printed = 0, total_chars = 0;
va_list arg_list;
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
va_start(arg_list, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
chars_printed += _putc(format[i]);
total_chars++;
}
else
{
++i;
chars_printed = printf_helper(format, i, arg_list);
if (chars_printed == -1)
return (-1);
total_chars += chars_printed;
}
}
va_end(arg_list);
return (total_chars);
}
