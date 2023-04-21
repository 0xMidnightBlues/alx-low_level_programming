#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * @...: arguments to sum
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int ret = 0;

	va_start(ap, n);
	while (i < n)
	{
		ret += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (ret);
}
