#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)
#define BUFFER_SIZE 1024

/**
 * struct FormatSpecifier - Struct to represent a format specifier
 *
 * @specifier: the format specifier character.
 * @action: the function associated with the specifier.
 */
typedef struct FormatSpecifier
{
char specifier;
int (*action)(va_list);
} fs_t;

/* Printing Functions */
char *to_base(unsigned long int num, int base, int lowercase);
int count_digits(int num);
int _puts(char *s);
int _putc(char c);
int _printf(const char *format, ...);
int printf_helper(const char *format, int currentIndex, va_list argList);

int print_character(va_list argList);
int print_string(va_list argList);
int print_percent_sign(va_list argList);
int print_integer(va_list argList);
int print_binary(va_list argList);
int print_uns_integer(va_list argList);
int print_octal_integer(va_list argList);
int print_hexa_upper(va_list argList);
int print_hexa_lower(va_list argList);
int print_special(va_list argList);
int print_pointer(va_list argList);
int print_rev(va_list argList);
int print_rot13(va_list argList);
#endif /* _PRINTF_H */
