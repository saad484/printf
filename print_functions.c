#include "main.h"


/**
* _print_char - prints a character
* @c: the character to print
*
* Return: the number of characters printed
*/
int _print_char(char c)
{
return (write(1, &c, 1));
}

/**
* _print_string - prints a string
* @str: the string to print
*
* Return: the number of characters printed
*/
int _print_string(char *str)
{
int str_length = 0;
while (str[str_length] != '\0')
str_length++;
return (write(1, str, str_length));
}

/**
* _print_number - prints an integer
* @n: the integer to print
*
* Return: the number of characters printed
*/
int _print_number(int n)
{
char buffer[12];
int length = 0;

if (n < 0)
{
_print_char('-');
n = -n;
length++;
}
if (n == 0)
{
return (_print_char('0') + length);
}
while (n > 0)
{
buffer[length] = (n % 10) + '0';
n /= 10;
length++;
}
int printed_chars = 0;
while (length > 0)
{
length--;
printed_chars += _print_char(buffer[length]);
}
return (printed_chars);
}
/**
* _print_unsigned_number - prints an unsigned integer
* @n: the unsigned integer to print
*
* Return: the number of characters printed
*/
int _print_unsigned_number(unsigned int n)
{
char buffer[11];
int length = 0;
if (n == 0)
{
return (_print_char('0') + length);
}
while (n > 0)
{
buffer[length] = (n % 10) + '0';
n /= 10;
length++;
}
while (length > 0)
{
length--;
_print_char(buffer[length]);
}
return (length);
}
