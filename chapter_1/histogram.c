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
void histogram_frequency_per_character();

int main(void)
{
	histogram_frequency_per_character();
	return 0;
}

void histogram_horizontal()
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

void histogram_vertical()
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

void histogram_frequency_per_character()
{
	//Example: Word is "Apple", 4 different chars, twice the same char
	//Word is 5 chars long, so print 5 "histogram" lines, each with one # printed
	//And print the p histogram not once but twice vertically, which is the frequency
	//Go over the entire array with a for loop each getchar()
	//Check if the current char matches any of the other chars in the array
	//If so, increment the variable that determines how often to print #
	/*int c;
	int char_amount = 0;
	int same_char_amount = 0;
	int current_character = 0;
	int characters[30];
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			for(int i = 0; i < char_amount; ++i)
			{
				if(characters[i] == characters[char_amount - i])
				{
					++same_char_amount;
				}
				else
				{
					putchar('#');
					putchar('\n');
				}
			}
			for(int j = 0; j < same_char_amount; ++j)
			{
				putchar('#');
			}
			same_char_amount = 0;
			char_amount = 0;
			putchar('\n');
		}
		else
		{
			current_character = c;
			characters[char_amount] = c;
			++char_amount;
		}
	}
	*/

	//Let's try it again but simpler
	int c;
	int char_count = 0;
	int max_characters = 255;
	int characters[max_characters];
	
	//Initialize the array
	for(int j = 0; j < max_characters; ++j)
	{
		characters[j] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c != '\n')
		{
			characters[char_count] = c;
			++char_count;
		}

		for(int i = 0; i < char_count; ++i)
		{
			if(characters[i] == c)
			{
				putchar('#');
			}
			if(i == char_count - 1)
			{
				putchar('\n');
			}
		}

		if(c == ' ' || c == '\t' || c == '\n')
		{
			char_count = 0;
		}
	}
}