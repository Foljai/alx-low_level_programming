#ifndef _VARIADIC_H_
#define _VARIADIC_H_


	int _putchar(char c);
	int sum_them_all(const unsigned int n, ...);
	void print_numbers(const char *separator, const unsigned int n, ...);
	void print_strings(const char *separator, const unsigned int n, ...);
	void print_all(const char * const format, ...);
	#endif
#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - Returns the sum of all its paramters.
	 * @n: The number of paramters passed to the function.
	 * @...: A variable number of paramters to calculate the sum of.
	 *
	 * Return: If n == 0 - 0.
	 *         Otherwise - the sum of all parameters.
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}
