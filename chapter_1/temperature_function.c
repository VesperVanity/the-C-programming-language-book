/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise - 1-15
File created: 2025-08-02
File last modified: 2025-08-02
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);

int main(void)
{
	float input_number = 40.0f;
	printf("%.1f\n", celsius_to_fahrenheit(input_number));
	printf("%.1f\n", fahrenheit_to_celsius(input_number));
	return 0;
}

float celsius_to_fahrenheit(float celsius)
{
	float fahrenheit = 0.0f;
	fahrenheit = (celsius * 9 / 5) + 32;
	return fahrenheit;
}

float fahrenheit_to_celsius(float fahrenheit)
{
	float celsius = 0.0f;
	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
	return celsius;
}