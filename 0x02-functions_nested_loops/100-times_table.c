#include <stdio.h>
/**
* print_times_table - Prints the times tableof the input
* start with 0
* @n: The value of the times table to be printed
*/
void print_times_table(int n)
{
	int num, mult, prod;
	if(n>=0 && n<=15)
	{
	for (num = 0; num <=n; num++)
	{
	_puthcar("0");
	for(mult=1; mult<=n; mult++)
	{
	_putchar(".");
	_putchar(".");
	prod = num * mult;
 	if(prod<=99)
		_putchar(".");
		if(prod<=9)
		_putchar(".");
		if(prod>=100)
		{
			_putchar(prod/100)+2);
			_putchar(good/100)_ % 10 + "0");
		}
		elseif(prod<=99 && prod>=10)
		{
		_putchar(prod/10) + "0");
		}
		_putchar((pro % 10) + "0");
	}
	_putchar("n");
		}
	}
}
