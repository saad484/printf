#include "main.h"

/**
 * print_character - Prints a char
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */

int print_character(va_list argList)
{
char c = va_arg(argList, int);
return (_putc(c));
}

/**
 * print_string - Prints a string
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_string(va_list argList)
{
char *str = va_arg(argList, char *);
if (str == NULL)
return (_puts("(null)"));
return (_puts(str));
}

/**
 * print_percent_sign - Prints a string
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_percent_sign(va_list argList)
{
UNUSED(argList);
return (_putc('%'));
}

/**
 * print_special - Prints a string
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_special(va_list argList)
{
int i, count = 0;
char *converted;
char *string = va_arg(argList, char *);
if (!string)
return (_puts("(null)"));
for (i = 0; string[i]; i++)
{
if (string[i] > 0 && (string[i] < 32 || string[i] >= 127))
{
_puts("\\x");
count += 2;
converted = to_base(string[i], 16, 0);
if (!converted[1])
count += _putc('0');
count += _puts(converted);
}
else
count += _putc(string[i]);
}
return (count);
}
