#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{

va_list my_numbers;
va_start(my_numbers, n);

int result = 0, i;

if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
	result = result + va_arg(my_numbers, int);

}

va_end(my_numbers);
return (result);

}
