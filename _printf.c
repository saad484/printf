#include "main.h"

/**
 * _printf - print formatted text
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
int chPrint = 0;
va_list lsarg;
if (format == NULL)
return (-1);
va_start(lsarg, format);
while (*format)
{
if (*format != '%')
{
chPrint += _print_char(*format);
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
chPrint += _print_char('%');
}
else
{
chPrint += handle_format_specifier(format, lsarg);
}
}
format++;
}
va_end(lsarg);
return (chPrint);
}

