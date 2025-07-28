/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise 1-8, 1-9, 1-10
File created: 2025-07-28
File last modified: 2025-07-28
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

void count_blanks_tabs_newlines();
void replace_blanks();
void unambiguous_tab_backspace_backslash();

int main(void)
{
	unambiguous_tab_backspace_backslash();
	return 0;
}

void count_blanks_tabs_newlines()
{
	//Three separate variables each to count each type
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

void replace_blanks()
{
	//Get the input, replace each 1+ blanks with only 1 blank, give it as output
	int input_stream;
	int blank_count = 0;
	int blank_count_max = 1;
	while((input_stream = getchar()) != EOF)
	{
		if(input_stream != ' ')
		{
			putchar(input_stream);
		}
		if(input_stream == ' ')
		{
			++blank_count;
		}
		if(blank_count > blank_count_max)
		{
			input_stream = ' ';
			putchar(input_stream);
			blank_count = 0;
		}
	}
}

void unambiguous_tab_backspace_backslash()
{
	//Replace each tab for \t, backspace for \b, backslash for "\\"
	int input_stream;
	while((input_stream = getchar()) != EOF)
	{
		if(input_stream != '\t' && input_stream != '\b' && input_stream != '\\')
		{
			putchar(input_stream);
		}
		else if(input_stream == '\t')
		{
			input_stream = 92;
			putchar(input_stream);
			input_stream = 116;
			putchar(input_stream);
		}
		else if(input_stream == '\b')
		{
			input_stream = 92;
			putchar(input_stream);
			input_stream = 98;
			putchar(input_stream);
		}
		else if(input_stream == '\\')
		{
			input_stream = 92;
			putchar(input_stream);
			input_stream = 92;
			putchar(input_stream);
		}
	}
}