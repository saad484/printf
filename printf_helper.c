#include "main.h"

/**
 * printf_helper - Prints an argument based on its type
 *
 * @format: the format string.
 * @currentIndex: the current index in the format
 * @argList: the list of arguments to be printed.
 *
 * Return: the number of printed characters,
 *  -1 if error, unknown_len if neither
 */
int printf_helper(const char *format, int currentIndex, va_list argList)
{
int i, unknown_len = 0;

fs_t fs_types[] = {
{'c', print_character}, {'s', print_string}, {'%', print_percent_sign},
{'i', print_integer}, {'d', print_integer},
{'\0', NULL}
};

for (i = 0; fs_types[i].specifier != '\0'; i++)
{
if (format[currentIndex] == fs_types[i].specifier)
{
return (fs_types[i].action(argList));
}
}
if (fs_types[i].specifier == '\0')
{
if (format[currentIndex] == '\0')
{
return (-1);
}
unknown_len += write(1, "%%", 1);
if (format[currentIndex - 1] == ' ')
{
unknown_len += write(1, " ", 1);
}
unknown_len += write(1, &format[currentIndex], 1);
return (unknown_len);
}
return (-1);
}
