#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void pr_uint(unsigned int n) {
	if (n / 10 != 0)
		pr_uint(n / 10);
	_putchar((n % 10) + '0');
}

void pr_int(int n) {
	if (n < 0) {
		_putchar('-');
		n = -n;
	}
	pr_uint((unsigned int) n);
}
