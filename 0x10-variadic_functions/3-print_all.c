#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  prints anything.
 * @format: format of the string
 * @...: arguments to sum
 * Return: sum of parameters
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char	*strarg;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				strarg = va_arg(ap, char *);
				if (strarg != NULL)
				{
					printf("%s", strarg);
					break;
				}
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
