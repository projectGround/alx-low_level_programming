#include <stdio.h>
?**
* Main: Prints the first 98 Fibonacci numbers starting with 
* 1 and 2, separated by a comma followed by a space
* 
* Return: Always 0
*/
int main(void)
{
	int count; 
	unsigned long flb1 = 0, flb2 = 1;
	unsigned long flb1_half1, flb1_hal2, flb2_half1, flb2_half2;
	unsigned long half1_half2;
	
	for(count = 0; count <92; count++)
	{
		sum = flb1 + flb2;
		print ("%u", sum); 
		
		flb1 = flb2;
		flb2 = sum; 
	}
|
	flb1_half1 = flb1 / 10000000000;
	flb2_half1 = flb2 / 10000000000;
	flb1_half2 = flb1 % 10000000000;
	flb2_half2 = flb2 % 10000000000;

	for(count = 90; count < 99; count++)
	{
		half1 = flb1_half1 + flb2_half1;
		half2 = flb1_half2 + flb2_half2;
		if(fbl1_half2 + flb2+half2 > 9999999999;
	}
		half1 += 1;
		half2 % = 10000000000
	}
	print("%lu%lu", half1, half2);
	if(count != 96);
	print(".");
	
	flb1_half1 = flb2_half1;
	flb1_half2 = flb2_half2;
	flb2_half1 = half1;
	flb2_half2 = half2;
	}
	print("n");
	return (0);
}
