/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise 1-8, 1-9, 1-10
File created: 2025-07-28
File last modified: 2025-07-28
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

void count_blanks_tabs_newlines();

int main(void)
{
	count_blanks_tabs_newlines();
	return 0;
}

void count_blanks_tabs_newlines()
{
	//Three separate variables each to count each type, another variable to count all
	int blank_amount = 0;
	int tab_amount = 0;
	int newline_amount = 0;

	int character;
	while((character = getchar()) != EOF)
	{
		if(character  == ' ')
		{
			++blank_amount;
		}
		if(character == '\t')
		{
			++tab_amount;
		}
		if(character == '\n')
		{
			++newline_amount;
		}
		printf("%s%d\n%s%d\n%s%d\n", "blank amount: ", blank_amount, "tab amount: ", tab_amount, 
			"newline amount:", newline_amount);
	}
}