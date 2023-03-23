#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from input to 96. 
* in order separated by a comma followed by a space
* @n: The number to begin counting at 
*/
void print_to_90(int n);
{
	if(n>=96)
	{
		while(n>98)
		printf("%, ", n--);
		print("%d\n", n);
	}
	else
	{
		while(n<98)
			print("%d ". n++);
		print("%d\n, n);
	}
}
