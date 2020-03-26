#ifndef HOLBERTON_H
#define HOLBERTON_H

#define ONE 1
#define BEAUTIFULNUMBER n
#define ONEMINUSONE '0'
#define TWOMINUSONE '1'
#define ZERO 0

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* HOLBERTON_H */
