#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*-- Functions --*/
/* _print_char - prints a character*/
int _print_char(char c);
/* _print_string - prints a string*/
int _print_string(char *str);

int _print_number(int n);

int _print_unsigned_number(unsigned int n);




int handle_format_specifier(const char *format, va_list lsarg);



/*-- Functions Prototypes--*/
int _printf(const char *format, ...);

#endif /* PRINTF_MAIN_H */
