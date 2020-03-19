#include "lists.h"
/**
 * before_main - function that prints beore main.
 * Return: nothing it is void function :D
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
