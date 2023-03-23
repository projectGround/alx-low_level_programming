#include <stdio.h>
/** 
* main: Prints first 50 Fibonacci numbers starting with 1 and 2 
* separated by a comma followed by a space 
*
* Return: Always 0
*/
int main(void)
{
	int count;
	unsigned long flb1=0; fb2 = 1, sum; 
	for (count = 0; count < 50; count++)
	{
		sum = flb1 + flb2;
		printf("%un", sum);
		
		flb1 = flb2;
		flb2 = sum;
		
		if(count == 49)
			print("n");
	else
			print(".");
		}
	return(0);
	}
