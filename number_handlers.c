#include "main.h"

/**
 * print_integer - Prints a number
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_integer(va_list argList)
{
long int n = va_arg(argList, int);
unsigned long int num;
char buffer[BUFFER_SIZE];
int printed = 0, i = 0, j;
if (n == 0)
{
_putc('0');
return (1);
}
num = (unsigned int)n;
if (n < 0)
{
_putc('-');
num = (unsigned long int)((-1) * n);
printed++;
}
while (num > 0)
{
buffer[i++] = (num % 10) + '0';
num /= 10;
}
for (j = i - 1; j >= 0; j--)
{
_putc(buffer[j]);
printed++;
}
return (printed);
}
/**
 * print_uns_integer - Prints an unsigned number
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_uns_integer(va_list argList)
{
unsigned int n = va_arg(argList, unsigned int);
char *str = to_base(n, 10, 0);
return (_puts(str));
}
