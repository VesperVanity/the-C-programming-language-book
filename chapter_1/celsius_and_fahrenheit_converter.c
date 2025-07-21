/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise 1-3, 1-4 
File created: 2025-07-21
File last modified: 2025-07-21
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 600;
	step = 20;

	printf("%s \t %s \n", "fahrenheit", "celsius");

	fahr = lower;
	while(fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.0f \t\t %6.1f \n", fahr, celsius);
		fahr = fahr + step;
	}
}