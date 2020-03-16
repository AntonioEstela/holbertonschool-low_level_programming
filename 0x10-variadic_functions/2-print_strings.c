#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 * Return: nothing, it is a void function :)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s%s", string, separator);
		}
		else
		{
			printf("%s", string);
		}
	}
	printf("\n");
	va_end(ap);
}
