#include "main.h"
/**
* _printf - print characters
* @format: number of argument to be print
*
* Return: length of the characters
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
{
break;
}
if (*format == '%')
{
chPrint += _print_char(*format);
}
else if (*format == 'c')
{
char c = va_arg(lsarg, int);
chPrint += _print_char(*format);
}
else if (*format == 's')
{
char *strP = va_arg(lsarg, char*);
int str_length = 0;
chPrint += _print_string(strP);
}
} format++;
}
va_end(lsarg);
return (chPrint);
}
