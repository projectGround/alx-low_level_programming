#include <stdio.h>
/**
* main: Print the sum of even-valued Fibonacci sequence
* terms not exceeding 4000000
* 
* Return: Always 0
*/
int main(void) 
{
	unsigned long flb1 = 0, flb2 = 1, fbsum;
	float tot_sum;
	
	while(1)
	{
	flbsum = flb1 + flb2;
	if(flbsum > 4000000)
		break
	if(flbsum % 2) == 0)
		tot_sum += flbsum;
		flb1 = flb2;
		flb2 = flbsum;
	}
	printf("%dfn", tot_sum);
		return(0);
	}

