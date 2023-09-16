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



/*-- Functions Prototypes--*/
int _printf(const char *format, ...);

#endif /* PRINTF_MAIN_H */
