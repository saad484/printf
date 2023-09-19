#include "main.h"
/**
 * count_digits - returns the number of digits in an integer
 *
 * @num: integer to count
 *
 * Return: number of digits
 */
int count_digits(int num)
{
unsigned int digits = 0;
unsigned int abs = num;
if (num < 0)
abs = -num;
while (abs != 0)
{
abs /= 10;
digits++;
}
return (digits);
}
/**
 * to_base - converts number and base into string
 *
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 *
 * Return: result string
 */
char *to_base(unsigned long int num, int base, int lowercase)
{
static char *map_to;
static char buff[50];
char *ptr;
map_to = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
ptr = &buff[49];
*ptr = '\0';
do {
*--ptr = map_to[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
/**
 * _putc - Prints a string
 *
 * @c: the char to print
 *
 * Return: Number of chars printed
 */
int _putc(char c)
{
return (write(1, &c, 1));
}
/**
 * _puts - Prints a string
 *
 * @s: the string to print
 *
 * Return: Number of chars printed
 */
int _puts(char *s)
{
register int i;
for (i = 0; s[i] != '\0'; i++)
_putc(s[i]);
return (i);
}
