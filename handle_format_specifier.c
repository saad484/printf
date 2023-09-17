#include "main.h"

/**
 * handle_format_specifier - handles format specifiers other than '%'
 * @format: the format specifier character
 * @lsarg: the va_list of arguments
 *
 * Return: the number of characters printed for this specifier
 */
int handle_format_specifier(const char *format, va_list lsarg)
{
int chPrint = 0;
switch (*format)
{
case 'c':
chPrint += _print_char(va_arg(lsarg, int));
break;
case 's':
chPrint += _print_string(va_arg(lsarg, char *));
break;
case 'd':
case 'i':
chPrint += _print_number(va_arg(lsarg, int));
break;
case 'u':
chPrint += _print_unsigned_number(va_arg(lsarg, unsigned int));
break;
default:
chPrint += _print_char('%');
break;
}
return (chPrint);
}
