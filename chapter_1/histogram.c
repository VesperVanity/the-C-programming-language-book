/*
The C Programming Language by Brian W. Kernighan & Dennis M. Ritchie
Chapter 1 Exercise - 1-13, 1-14
File created: 2025-08-01
File last modified: 2025-08-01
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

void histogram_horizontal();
void histogram_vertical();

int main(void)
{
	histogram_vertical();
	return 0;
}

void histogram_horizontal()
{
	//Print histogram horizontally depending on the length of words of the input
	//Use arrays or counter variable
	int c;
	int word_character_count = 0;
	while((c = getchar()) != EOF)
	{
		++word_character_count;
		if(c == ' ' || c == '\t' || c == '\n')
		{
			//Decrease the \0 string termination operator
			//Decrease each occurrence of ' ', \t and \n
			--word_character_count;
			for(int i = 0; i < word_character_count; ++i)
			{
				putchar('#');
				putchar('\n');
			}
			//Reset character count
			word_character_count = 0;
		}
	}
}

void histogram_vertical()
{
	//Print histogram vertically depending on the length of words of the input
	//Use arrays or counter variable
	int c;
	int word_character_count = 0;
	while((c = getchar()) != EOF)
	{
		++word_character_count;
		if(c == ' ' || c == '\t' || c == '\n')
		{
			//Decrease the \0 string termination operator
			//Decrease each occurrence of ' ', \t and \n
			--word_character_count;
			for(int i = 0; i < word_character_count; ++i)
			{
				putchar('#');
			}
			//Reset character count
			word_character_count = 0;
			putchar('\n');
		}
	}
}