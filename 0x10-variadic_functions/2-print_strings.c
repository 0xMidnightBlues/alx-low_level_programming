#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings
 * @n: number of arguments
 * @...: arguments to sum
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char	*strarg;

	va_start(ap, n);
	while (i < n)
	{
		strarg = va_arg(ap, char *);
		if (strarg != NULL)
			printf("%s", strarg);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
