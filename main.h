#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct function - structure to find the correct function for a specifier
 * @spec: The specifier in question
 * @funct: The function associated with the specifier
 */
typedef struct function
{
	char *spec;
	int (*funct)(va_list *);
} function_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _prntchar(va_list *args);
void putLong(long x);
int pr_int(va_list *args);
int print_min(void);
int pr_uint(va_list *args);
void pr_uints(unsigned int c);
int _prnthex(va_list *args);
int _prntcaphex(va_list *args);
char *_memcpy(char *dest, char *src, unsigned int n);
int _prntstr(va_list *args);
char *decToOctal(int decimalnum);
int _prntoct(char *a);
int _prntadd(unsigned a);
int _prntprct(va_list *args);
void print_address_hex(void* p0);
char hex_digit(int v);
char *_itoa(int n, char *str, int base);
int _strlen(char *s);
int _strcmp(char s1, char *s2);
int (*_get_function(char s))(va_list * args);
void reverse(char str[], int length);

#endif
