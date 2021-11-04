#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
void putLong(long x);
void pr_int(int n);
void pr_uint(unsigned int i);
char *get_hex(unsigned int a, int c);
int _prnthex(char *a);
char *_memcpy(char *dest, char *src, unsigned int n);
int _prntstr(char *s);
char *decToOctal(int decimalnum);
int _prntoct(char *a);
int _prntadd(unsigned a);
void print_address_hex(void* p0);
char hex_digit(int v);

#endif
