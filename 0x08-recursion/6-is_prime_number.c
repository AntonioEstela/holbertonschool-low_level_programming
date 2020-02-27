#include "holberton.h"

int _operation(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return _operation(num, i - 1);
       }       
    }
}

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	
	return(_operation(n, n / 2));

}