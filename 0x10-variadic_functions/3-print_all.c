#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (string)
 * Return: Nothing, it is void :D
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 1;
	char *string;

	while (format)
	{
		va_start(ap, format);
		while (*(format + i))
		{
			j = 1;
			switch (*(format + i))
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
				string = va_arg(ap, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				j = 0;
				break;
			}
			if (*(format + (i + 1)) && j)
				printf(", ");
			i++;
		}
		va_end(ap);
		break;
	}
	printf("\n");
}
