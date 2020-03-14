#ifndef CRASHEDMACHINE
#define CRASHEDMACHINE
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list list);
void _printstring(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);
#endif /* CRASHEDMACHINE */
