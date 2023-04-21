#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  prints anything.
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 * @...: arguments to sum
 * Return: sum of parameters
 */
void print_strings(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char	*strarg;

	if (format)
	{
		printf("\n");
		return ;
	}
	va_start(ap, format);
	while (format[i] != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				strarg = va_arg(ap, char *);
				if (strarg != NULL)
					printf("%s", strarg);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != NULL)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}