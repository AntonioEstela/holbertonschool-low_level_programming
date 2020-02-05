#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %zu.\n byte(s)", sizeof(char));
	printf("Size of an int: %zu.\n byte(s)", sizeof(int));
	ptintf("Size of a long int: %zu\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %zu\n byte(s)", sizeof(long long int));
	printf("Size of a float: %zu.\n byte(s)", sizeof(float));
	return (0);
}
