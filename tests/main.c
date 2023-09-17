#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
unsigned int ui;
ui = (unsigned int)INT_MAX + 1024;
void *addr;
len = _printf("Let's try to printf a simple sentence.\n");
_printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
len = _printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
return (0);
}
