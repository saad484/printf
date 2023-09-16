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
