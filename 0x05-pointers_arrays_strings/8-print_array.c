#include "holberton.h"

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if(count != (n -1))
		{
			printf("%i, ", a[count]);
		}
		else
		{
			printf("%i\n", a[count]);
		}
		count++;
	}
		
}