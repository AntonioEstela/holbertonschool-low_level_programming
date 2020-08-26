#include "search_algos.h"
/**
 * print_array - function that prints an array of integers.
 * @array: array of integers to print.
 * @start: first element of the array.
 * @size: size of the array.
 * Return: Nothing it is a void function :D
 */
void print_array(int *array, int start, int size)
{
	int i = start;

	if (start <= size)
	{
		printf("Searching in array: ");
		/* printf("--%d--%d-- ", start, size); */
		while (i <= size)
		{
			printf("%d", array[i]);

			if (i < size)
				printf(", ");
			i++;
		}
		printf("\n");
	}

}
/**
 * binary_search - Function that searches for a value in an array of integers.
 * @array: array of integers to search in.
 * @size: size of the given array.
 * @value: value to search in the array.
 * Return: -1 in failure otherwhise the function returns the index of value.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid = 0;

	if (array != NULL && size != '\0' && value != '\0')
	{
		print_array(array, left, right);

		while (left <= right)
		{

			mid = (left + right) / 2;

			if (array[mid] == value)
				return (mid);

			else if (value < mid)
			{
				right = mid - 1;
				print_array(array, left, right);
			}
			else
			{
				left = mid + 1;
				print_array(array, left, right);
			}
		}
	}

	return (-1);
}
