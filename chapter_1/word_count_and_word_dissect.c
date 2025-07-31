/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise - 1-11, 1-12
File created: 2025-07-29
File last modified: 2025-07-31
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

void input_one_word_per_line();

int main(void)
{
	input_one_word_per_line();
	return 0;
}

void input_one_word_per_line()
{
	//Too dumb for this
	//Print a new line each blank
	int c;
	int word_done = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if(word_done == 1)
			{
				word_done = 0;
				putchar('\n');
			}
		}
		else if(word_done == 0)
		{
			word_done = 1;
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
}